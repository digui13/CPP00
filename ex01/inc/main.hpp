/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:48:41 by dpestana          #+#    #+#             */
/*   Updated: 2023/04/13 11:49:04 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	***********************************	*/
/*	*			INCLUDES			  *	*/
/*	***********************************	*/
#include <iostream>
#include <sstream>

/*	***********************************	*/
/*	*			COLORS				  *	*/
/*	***********************************	*/
#define BLACK_COLOR		"\033[1;30m"
#define RED_COLOR		"\033[1;31m"
#define GREEN_COLOR		"\033[1;32m"
#define YELLOW_COLOR	"\033[0;33m"
#define BLUE_COLOR		"\033[1;36m"
#define WHITE_COLOR		"\033[1;37m"
#define END_COLOR		"\033[0m"

/*	***********************************	*/
/*	*			USINGS			  	  *	*/
/*	***********************************	*/
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;
using std::ws;
using std::right;
using std::istringstream;