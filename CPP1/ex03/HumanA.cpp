/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 13:31:05 by bozil             #+#    #+#             */
/*   Updated: 2026/01/29 12:13:32 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
}

HumanA::~HumanA(void)
{
}

void HumanA::attack(void) const
{
    std::cout << this->name << " use " << this->weapon.getType() << std::endl;
}
