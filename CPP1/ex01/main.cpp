/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 09:05:47 by bozil             #+#    #+#             */
/*   Updated: 2026/01/29 12:10:50 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::cout << "Here come a newZombie:" << std::endl;
	Zombie *heapZombie = newZombie("HeapZombie");
	heapZombie->announce();
	delete heapZombie;

	std::cout << std::endl << "Here come a randomChump:" << std::endl;
	randomChump("StackZombie");

	std::cout << std::endl << "Here come a zombieHorde:" << std::endl;
	int N = 5;
	Zombie *horde = zombieHorde(N, "HordeZombie");
	
	for (int i = 0; i < N; i++)
	{
		std::cout << "Zombie " << i << ": ";
		horde[i].announce();
	}
	
	delete[] horde;

	return (0);
}
