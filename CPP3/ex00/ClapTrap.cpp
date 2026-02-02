/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 11:32:07 by bozil             #+#    #+#             */
/*   Updated: 2026/02/02 14:00:36 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name)
{
    ClapTrap::name = "Toto";
    ClapTrap::HP = 10;
    ClapTrap::EP = 10;
    ClapTrap::DMG = 0;
    std::cout << "Claptrap have been creat." << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Claptrap have been destroyed." << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if((ClapTrap::HP == 0) && (ClapTrap::EP == 0))
    {
        std::cout << "STOP, he is already dead!" << std::endl;
    }
    else
    {
        EP - 1;
        if (EP < 0)
            EP = 0;
        std::cout << name << " is attacking " << target << " doing " << DMG << "!" << std::endl;
        HP - DMG;
        if (HP < 0)
            HP = 0;
        std::cout << target << " have " << HP << " left" << std::endl;
        std::cout << name << " have " << EP << "EP left." << std::endl;
        
    }
}