#include "../inc/PhoneBook.hpp"

// Constructor
Contact::Contact()
{
	cout << GREEN_COLOR << "*** Contact Created! ***" << END_COLOR << endl;
}

// Desctructor
Contact::~Contact()
{
	cout << RED_COLOR << "*** Contact Destroyed! ***" << END_COLOR << endl;
}

// Method printContact
void	Contact::printContact(void)
{
	cout << GREEN_COLOR << "*** Contact finded! ***" << END_COLOR << endl;
	cout << YELLOW_COLOR << "Index: " << END_COLOR << getIndex() << endl;
	cout << YELLOW_COLOR << "First name: " << END_COLOR << first_name << endl;
	cout << YELLOW_COLOR << "Last name: " << END_COLOR << last_name << endl;
	cout << YELLOW_COLOR << "Nickname: " << END_COLOR << nickname << endl;
	cout << YELLOW_COLOR << "Phone number: " << END_COLOR << phone_number << endl;
	cout << YELLOW_COLOR << "Darkest secret: " << END_COLOR << darkest_secret << endl;
}

// Method printContacts
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

// Method insertContact
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

// Method cleanFields
void	Contact::cleanFields(void)
{
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->phone_number = "";
	this->darkest_secret = "";
}

// Method setIndex
void	Contact::setIndex(void)
{
	this->idx = 0;
}

// Method getIndex
int		Contact::getIndex(void)
{
	return (this->idx);
}