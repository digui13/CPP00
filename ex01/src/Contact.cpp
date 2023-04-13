/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:51:35 by dpestana          #+#    #+#             */
/*   Updated: 2023/04/13 11:53:20 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

/*	***********************************	*/
/*	*		CONSTRUCTORS			  *	*/
/*	***********************************	*/
Contact::Contact()
{
	cout << GREEN_COLOR << "*** Contact Created! ***" << END_COLOR << endl;
}

Contact::~Contact()
{
	cout << RED_COLOR << "*** Contact Destroyed! ***" << END_COLOR << endl;
}

/*	***********************************	*/
/*	*			SETTERS				  *	*/
/*	***********************************	*/
void	Contact::setIndex(void)
{
	this->idx = 0;
}

/*	***********************************	*/
/*	*			GETTERS				  *	*/
/*	***********************************	*/
int		Contact::getIndex(void)
{
	return (this->idx);
}

/*	***********************************	*/
/*	*			METHODS				  *	*/
/*	***********************************	*/
void	Contact::printContact(void)
{
	cout << GREEN_COLOR << "*** Contact finded! ***" << END_COLOR << endl;
	cout << BLUE_COLOR << "Index: " << END_COLOR << getIndex() << endl;
	cout << BLUE_COLOR << "First name: " << END_COLOR << first_name << endl;
	cout << BLUE_COLOR << "Last name: " << END_COLOR << last_name << endl;
	cout << BLUE_COLOR << "Nickname: " << END_COLOR << nickname << endl;
	cout << BLUE_COLOR << "Phone number: " << END_COLOR << phone_number << endl;
	cout << BLUE_COLOR << "Darkest secret: " << END_COLOR << darkest_secret << endl;
}

void	Contact::printContacts(void)
{
	cout << BLUE_COLOR << "|" << END_COLOR;
	cout.width(10); 
	cout << right << idx;
	cout << BLUE_COLOR << "|" << END_COLOR;
	cout.width(10); 
	cout << right << first_name.substr(0, 9) + (first_name.length() > 9 ? "." : "");
	cout << BLUE_COLOR << "|" << END_COLOR;
	cout.width(10);
	cout << right << last_name.substr(0, 9) + (last_name.length() > 9 ? "." : "");
	cout << BLUE_COLOR << "|" << END_COLOR;
	cout.width(10);
	cout << right << nickname.substr(0, 9) + (nickname.length() > 9 ? "." : "");
	cout << BLUE_COLOR << "|" << END_COLOR;
	cout << endl;
}

bool	Contact::insertContact(void)
{
	cout << YELLOW_COLOR << "*** Inserting contact... ***" << END_COLOR << endl;
	cout << YELLOW_COLOR << "First Name: " << END_COLOR;
	getline(cin >> ws, this->first_name);
	cout << YELLOW_COLOR << "Last Name: " << END_COLOR;
	getline(cin >> ws, this->last_name);
	cout << YELLOW_COLOR << "Nickname: " << END_COLOR;
	getline(cin >> ws, this->nickname);
	cout << YELLOW_COLOR << "Phone Number: " << END_COLOR;
	getline(cin >> ws, this->phone_number);
	cout << YELLOW_COLOR << "Darkest Secret: " << END_COLOR;
	getline(cin >> ws, this->darkest_secret);
	if (this->first_name.empty() || this->last_name.empty() || this->nickname.empty() || this->phone_number.empty() || this->darkest_secret.empty())
	{
		cout << RED_COLOR << "*** Error inserting contact ***" << END_COLOR << endl;
		return false;
	}
	cout << RED_COLOR << "*** Contact inserted! ***" << END_COLOR << endl;
	idx++;
	if (idx > MAX_CONTACTS)
		idx = 1;
	return true;
}

void	Contact::cleanFields(void)
{
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->phone_number = "";
	this->darkest_secret = "";
}