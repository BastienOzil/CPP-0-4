/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 12:23:40 by bozil             #+#    #+#             */
/*   Updated: 2026/02/04 12:24:37 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap clap("Clappy");
    ScavTrap scav("Scavy");
    FragTrap frag("Fraggy");

    clap.attack("Target");
    scav.attack("Target");
    frag.attack("Target");

    scav.guardGate();
    frag.highFivesGuys();

    return (0);
}
