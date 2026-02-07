/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 11:52:00 by bozil             #+#    #+#             */
/*   Updated: 2026/02/04 12:28:29 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->HP = 100;
	this->EP = 50;
	this->DMG = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	this->HP = 100;
	this->EP = 50;
	this->DMG = 20;
	std::cout << "ScavTrap " << this->name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap assignment operator called" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	if (HP == 0)
	{
		std::cout << "ScavTrap " << name << " is dead and can't attack!" << std::endl;
		return;
	}
	if (EP == 0)
	{
		std::cout << "ScavTrap " << name << " has no energy points left!" << std::endl;
		return;
	}
	EP--;
	std::cout << "ScavTrap " << name << " attacks " << target 
			  << ", causing " << DMG << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode!" << std::endl;
}
