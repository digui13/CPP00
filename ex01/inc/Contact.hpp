#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "main.hpp"

class Contact
{
	private:
		int		idx;
		string	first_name;
		string	last_name;
		string	nickname;
		string	phone_number;
		string	darkest_secret;

	public:
		Contact();
		~Contact();
		void	printContact(void);
		void	printContacts(void);
		bool	insertContact(void);
		void	cleanFields(void);
		void	setIndex(void);
		int		getIndex(void);
};

#endif