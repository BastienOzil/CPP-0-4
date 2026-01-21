/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:25:51 by bozil             #+#    #+#             */
/*   Updated: 2026/01/20 16:41:37 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	if (ac >= 2)
	{
		std::string line;

		for (int j = 1; ac > j; j++)
		{
            line = av[j];
			for (int i = 0; line[i]; i++)
			{
				char c = toupper(line[i]);
				std::cout << c;
			}
		}
		std::cout << std::endl;
	}
	else if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	return (0);
}