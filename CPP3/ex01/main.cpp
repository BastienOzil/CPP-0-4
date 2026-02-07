/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 11:52:00 by bozil             #+#    #+#             */
/*   Updated: 2026/02/04 12:19:27 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap scav("Guardian");
	
	scav.attack("Enemy");
	scav.takeDamage(30);
	scav.beRepaired(20);
	scav.guardGate();
	
	return (0);
}
