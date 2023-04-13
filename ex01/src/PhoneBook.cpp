/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:48:45 by dpestana          #+#    #+#             */
/*   Updated: 2023/04/13 11:51:42 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

/*	***********************************	*/
/*	*		CONSTRUCTORS			  *	*/
/*	***********************************	*/
PhoneBook::PhoneBook()
{
	cout << GREEN_COLOR << "*** PhoneBook created! ***" << END_COLOR << endl;
}

PhoneBook::~PhoneBook()
{
	cout << RED_COLOR << "*** PhoneBook destroyed! ***" << END_COLOR << endl;	
}

/*	***********************************	*/
/*	*			METHODS		  		  *	*/
/*	***********************************	*/
void	PhoneBook::inicializeQty(void)
{
	this->qty = 0;
}

void	PhoneBook::addContact(Contact *c)
{
	contacts[c->getIndex() - 1] = *c;
	cout << GREEN_COLOR << "*** Contact added to PhoneBook! ***" << END_COLOR << endl;
	if (qty < MAX_CONTACTS)
		qty++;
}

void	PhoneBook::searchContact(void)
{
	int		search_idx;
	string	input;

	if (qty == 0)
		cout << RED_COLOR << "*** Contact not founded! ***" << END_COLOR << endl ;
	else
	{
		cout << BLUE_COLOR << "---------------------------------------------" << END_COLOR << endl;
		cout << BLUE_COLOR << "|  INDEX   |FIRST_NAME| LASTNAME | NICKNAME |" << END_COLOR << endl;
		cout << BLUE_COLOR << "|-------------------------------------------|" << END_COLOR << endl;
		for (int i = 0 ; i < qty ; i++)
			contacts[i].printContacts();
		cout << BLUE_COLOR << "---------------------------------------------" << END_COLOR << endl;
		cout << "Index: ";
		getline(cin >> ws, input);
		if (cin.good()) 
			istringstream(input) >> search_idx;
		if (0 < search_idx && search_idx <= qty)
			contacts[search_idx - 1].printContact();
		else
			cout << RED_COLOR << "*** Contact not founded! ***" << END_COLOR << endl ;
	}
}