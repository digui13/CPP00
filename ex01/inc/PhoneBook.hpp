/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:51:30 by dpestana          #+#    #+#             */
/*   Updated: 2023/04/13 11:51:31 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

/*	***********************************	*/
/*	*			INCLUDES			  *	*/
/*	***********************************	*/
#include "Contact.hpp"

/*	***********************************	*/
/*	*			DEFINES				  *	*/
/*	***********************************	*/
#define MAX_CONTACTS 8

/*	***********************************	*/
/*	*			CLASS				  *	*/
/*	***********************************	*/
class PhoneBook
{
	private:
		Contact	contacts[MAX_CONTACTS];
		int		qty;
	public:
		PhoneBook();
		~PhoneBook();
		void	inicializeQty(void);
		void	addContact(Contact*);
		void	searchContact(void);
};

#endif