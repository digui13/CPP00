#include "../inc/PhoneBook.hpp"

int	main(void)
{
	Contact		c;
	PhoneBook	pb;
	string		input;

	pb.inicializeQty();
	c.setIndex();
	while (1)
	{
		cout << ": ";
		getline(cin >> ws, input);
		if (input.compare("SEARCH") == 0)
			pb.searchContact();
		else if (input.compare("ADD") == 0)
		{
			c.cleanFields();
			if (c.insertContact() == true)
				pb.addContact(c);
		}
		else if (input.compare("EXIT") == 0)
		{
			cout << YELLOW_COLOR << "*** Quitting the program ***" << END_COLOR << endl;
			break ;
		}
		else
			cout << RED_COLOR << "*** Invalid command! ***" << END_COLOR << endl;
	}
	return (0);
}