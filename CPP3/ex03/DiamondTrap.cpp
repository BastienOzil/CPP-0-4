/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 12:10:00 by bozil             #+#    #+#             */
/*   Updated: 2026/02/04 12:27:05 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Default Constructor
DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), name("Default")
{
    this->HP = 100;
    this->EP = 50;
    this->DMG = 30;
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), name(name)
{
    this->HP = 100;
    this->EP = 50;
    this->DMG = 30;
    std::cout << "DiamondTrap " << this->name << " constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = other;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->name << " destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    std::cout << "DiamondTrap assignment operator called" << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other);
        this->name = other.name;
    }
    return (*this);
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << this->name << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
}
