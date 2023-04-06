#include "../inc/PhoneBook.hpp"

// Constructor
PhoneBook::PhoneBook()
{
	cout << GREEN_COLOR << "*** PhoneBook created! ***" << END_COLOR << endl;
}

// Desctructor
PhoneBook::~PhoneBook()
{
	cout << RED_COLOR << "*** PhoneBook destroyed! ***" << END_COLOR << endl;	
}

// Method Inicialize 
void	PhoneBook::inicializeQty(void)
{
	this->qty = 0;
}

// Method addContact
void	PhoneBook::addContact(Contact c)
{
	contacts[c.getIndex() - 1] = c;
	cout << GREEN_COLOR << "*** Contact added to PhoneBook! ***" << END_COLOR << endl;
	if (qty < MAX_CONTACTS)
		qty++;
}

// Method searchContact
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
			contacts[i].printContact();
		cout << BLUE_COLOR << "---------------------------------------------" << END_COLOR << endl;
		cout << "Index: ";
		getline(cin >> ws, input);
		if (cin.good()) 
			istringstream(input) >> search_idx;
		if (0 < search_idx && search_idx <= qty)
			contacts[search_idx - 1].printContactIndividualy();
		else
			cout << RED_COLOR << "*** Contact not founded! ***" << END_COLOR << endl ;
	}
}