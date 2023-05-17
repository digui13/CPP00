/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:33:04 by dpestana          #+#    #+#             */
/*   Updated: 2023/05/15 18:54:45 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	***********************************	*/
/*	*			COLORS				  *	*/
/*	***********************************	*/
#define BLACK_COLOR		"\033[1;30m"
#define RED_COLOR		"\033[1;31m"
#define GREEN_COLOR		"\033[1;32m"
#define YELLOW_COLOR	"\033[0;33m"
#define BLUE_COLOR		"\033[1;36m"
#define WHITE_COLOR		"\033[1;37m"
#define END_COLOR		"\033[0m"

/*	***********************************	*/
/*	*			INCLUDES			  *	*/
/*	***********************************	*/
#include "Account.hpp"
#include <iostream>
#include <ctime>

/*	***********************************	*/
/*	*			USINGS			  	  *	*/
/*	***********************************	*/
using std::cout;
using std::endl;

/*	***********************************	*/
/*	*			INICIALIZES			  *	*/
/*	***********************************	*/
int	Account::_nbAccounts(0);
int	Account::_totalAmount(0);
int	Account::_totalNbDeposits(0);
int	Account::_totalNbWithdrawals(0);

/*	***********************************	*/
/*	*		CONSTRUCTORS			  *	*/
/*	***********************************	*/
Account::Account( void )
{
	_accountIndex = _nbAccounts++;
	_nbWithdrawals = 0;
	_nbDeposits = 0;
	_amount = 0;
	_displayTimestamp();
	cout 	<< GREEN_COLOR
			<< "index:" 	<< _accountIndex 	<< ";" 
			<< "amount:" 	<< _amount 			<< ";" 
			<< "created" 
			<< END_COLOR
			<< endl;
}

Account::Account( int initial_deposit )
{
	_accountIndex = _nbAccounts++;
	_nbWithdrawals = 0;
	_nbDeposits = 0;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	cout 	<< GREEN_COLOR
			<< "index:" 	<< _accountIndex 	<< ";" 
			<< "amount:" 	<< _amount 			<< ";" 
			<< "created"
			<< END_COLOR
			<< endl;
}

Account::~Account( void )
{
	_displayTimestamp();
	cout 	<< RED_COLOR
			<< "index:" 	<< _accountIndex 	<< ";"
			<< "amount:"	<< _amount 			<< ";" 
			<< "closed"
			<< END_COLOR
			<< endl;
}

/*	***********************************	*/
/*	*			GETTERS				  *	*/
/*	***********************************	*/
int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

int	Account::checkAmount( void ) const
{
	return (_amount);
}

/*	***********************************	*/
/*	*			METHODS	(make)		  *	*/
/*	***********************************	*/
void	Account::makeDeposit( int deposit )
{
	_totalAmount += deposit;
	_amount += deposit;
	_totalNbDeposits++;
	_nbDeposits++;
	_displayTimestamp();
	cout	<< BLUE_COLOR
			<< "index:" 		<< _accountIndex 		<< ";"
			<< "p_amount:" 		<< _amount - deposit 	<< ";"
			<< "deposit:" 		<< deposit 				<< ";"
			<< "amount:" 		<< _amount 				<< ";"
			<< "nb_deposits:" 	<< _nbDeposits
			<< END_COLOR
			<< endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (_amount >= withdrawal) 
	{
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		_nbWithdrawals++;
		_displayTimestamp();
		cout	<< YELLOW_COLOR
				<< "index:"				<< _accountIndex 		<< ";"
				<< "p_amount:"			<< _amount + withdrawal << ";"
				<< "withdrawal:"		<< withdrawal 			<< ";"
				<< "amount:" 			<< _amount 				<< ";"
				<< "nb_withdrawals:" 	<< _nbWithdrawals
				<< END_COLOR
				<< endl;
		return true;
	} 
	else 
	{
		_displayTimestamp();
		cout	<< YELLOW_COLOR
				<< "index:" 		<< _accountIndex 	<< ";"
				<< "p_amount:" 		<< _amount 			<< ";"
				<< "withdrawal:"	<< "refused"
				<< END_COLOR
				<< endl;
		return false;
	}
}

/*	***********************************	*/
/*	*			METHODS	(display)	 *	*/
/*	***********************************	*/
void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	cout 	<< WHITE_COLOR
			<< "accounts:" 		<< getNbAccounts() 		<< ";"
			<< "total:" 		<< getTotalAmount() 	<< ";"
			<< "deposits:" 		<< getNbDeposits() 		<< ";"
			<< "withdrawals:" 	<< getNbWithdrawals()
			<< END_COLOR
			<< endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	cout 	<< WHITE_COLOR
			<< "index:" 		<< _accountIndex 	<< ";"
			<< "amount:" 		<< _amount 			<< ";"
			<< "deposits:" 		<< _nbDeposits		<< ";"
			<< "withdrawals:"	<< _nbWithdrawals
			<< END_COLOR
			<< endl;
}

void	Account::_displayTimestamp( void )
{
	time_t		curr_time;
	char		date[19];
	
	time(&curr_time);
	
	strftime(date, 19, "[%Y%m%d_%H%M%S] ", localtime(&curr_time));
	
	cout << date;
	return ;
}