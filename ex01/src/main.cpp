/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:51:40 by dpestana          #+#    #+#             */
/*   Updated: 2023/04/13 11:51:40 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		cout << YELLOW_COLOR << "PhoneBook > " << END_COLOR;
		getline(cin >> ws, input);
		if (input.compare("SEARCH") == 0)
			pb.searchContact();
		else if (input.compare("ADD") == 0)
		{
			c.cleanFields();
			if (c.insertContact() == true)
				pb.addContact(&c);
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