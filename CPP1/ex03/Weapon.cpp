/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 13:31:15 by bozil             #+#    #+#             */
/*   Updated: 2026/02/02 08:35:35 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{
}

Weapon::~Weapon(void)
{
}

const std::string&	Weapon::getType(void) const
{
	return (this->type);
}

void	Weapon::setType(std::string newType)
{
	this->type = newType;
}
