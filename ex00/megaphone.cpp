/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:53:47 by dpestana          #+#    #+#             */
/*   Updated: 2023/04/13 11:53:48 by dpestana         ###   ########.fr       */
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
				if (97 <= *(*(argv + y) + x) && *(*(argv + y) + x) <= 122)
					std::cout << (char)(*(*(argv + y) + x) - 32);
				else
					std::cout << (char)(*(*(argv + y) + x));
				x++;
			}
			x = 0;
			y++;
		}
	}
	std::cout << "\n";
	return (0);
}
