/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:50:56 by dpestana          #+#    #+#             */
/*   Updated: 2023/04/13 11:50:56 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

/*	***********************************	*/
/*	*			INCLUDES			  *	*/
/*	***********************************	*/
#include "main.hpp"

/*	***********************************	*/
/*	*			CLASS				  *	*/
/*	***********************************	*/
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