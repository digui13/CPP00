/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:53:47 by dpestana          #+#    #+#             */
/*   Updated: 2023/05/03 03:04:52 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (y < argc)
		{
			if (y > 1)
				std::cout << " ";
			while (*(*(argv + y) + x) != '\0')
			{
				if (std::islower(*(*(argv + y) + x)) != 0)
					std::cout << (char)std::toupper(*(*(argv + y) + x));
				else
					std::cout << (*(*(argv + y) + x));

				x++;
			}
			x = 0;
			y++;
		}
	}
	std::cout << std::endl;
	return (0);
}
