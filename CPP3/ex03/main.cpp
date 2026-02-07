/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 12:27:58 by bozil             #+#    #+#             */
/*   Updated: 2026/02/04 12:28:00 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap diamond("Hero");

	diamond.whoAmI();
	diamond.attack("Enemy");
	diamond.takeDamage(50);
	diamond.guardGate();
	diamond.highFivesGuys();

	return (0);
}
