/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 09:05:47 by bozil             #+#    #+#             */
/*   Updated: 2026/01/29 12:05:56 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *heapZombie = newZombie("Zombie A");
	heapZombie->announce();

	randomChump("Zombie B");

	delete heapZombie;

	return (0);
}