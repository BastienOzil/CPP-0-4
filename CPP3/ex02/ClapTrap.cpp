/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 11:32:07 by bozil             #+#    #+#             */
/*   Updated: 2026/02/04 12:24:52 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), HP(10), EP(10), DMG(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : name(name), HP(10), EP(10), DMG(0)
{
    std::cout << "ClapTrap " << this->name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = other;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->name << " destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "ClapTrap assignment operator called" << std::endl;
    if (this != &other)
    {
        this->name = other.name;
        this->HP = other.HP;
        this->EP = other.EP;
        this->DMG = other.DMG;
    }
    return (*this);
}

void ClapTrap::attack(const std::string &target)
{
    if (HP == 0)
    {
        std::cout << "ClapTrap " << name << " is dead and can't attack!" << std::endl;
        return;
    }
    if (EP == 0)
    {
        std::cout << "ClapTrap " << name << " has no energy points left!" << std::endl;
        return;
    }
    EP--;
    std::cout << "ClapTrap " << name << " attacks " << target
              << ", causing " << DMG << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (HP == 0)
    {
        std::cout << "ClapTrap " << name << " is already dead!" << std::endl;
        return;
    }
    if (amount >= HP)
    {
        HP = 0;
        std::cout << "ClapTrap " << name << " takes " << amount
                  << " points of damage and dies!" << std::endl;
    }
    else
    {
        HP -= amount;
        std::cout << "ClapTrap " << name << " takes " << amount
                  << " points of damage! HP remaining: " << HP << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (HP == 0)
    {
        std::cout << "ClapTrap " << name << " is dead and can't be repaired!" << std::endl;
        return;
    }
    if (EP == 0)
    {
        std::cout << "ClapTrap " << name << " has no energy points left to repair!" << std::endl;
        return;
    }
    EP--;
    HP += amount;
    std::cout << "ClapTrap " << name << " repairs itself for " << amount
              << " hit points! HP: " << HP << ", EP: " << EP << std::endl;
}
