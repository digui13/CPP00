#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

// Define
#define MAX_CONTACTS 8

class PhoneBook
{
	private:
		Contact	contacts[MAX_CONTACTS];
		int		qty;
	public:
		PhoneBook();
		~PhoneBook();
		void	inicializeQty(void);
		void	addContact(Contact);
		void	searchContact(void);
};

#endif