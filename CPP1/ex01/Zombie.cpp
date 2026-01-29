/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 09:05:53 by bozil             #+#    #+#             */
/*   Updated: 2026/01/29 11:58:26 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void)
{
    name = "";
}

Zombie::Zombie(std::string zombieName)
{
    name = zombieName;
}

Zombie::~Zombie(void)
{
    std::cout << name << ": The Doom Guy saw it and kill it (chainsaw sound)" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string zombieName)
{
    name = zombieName;
}
