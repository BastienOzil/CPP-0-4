/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 13:31:11 by bozil             #+#    #+#             */
/*   Updated: 2026/01/26 13:58:32 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    {
        Weapon sword = Weapon("long sword");
        HumanA Sephiroth("Sephiroth", sword);
        Sephiroth.attack();
        sword.setType("supernova");
        Sephiroth.attack();
    }
    {
        Weapon sword = Weapon("buster bword");
        HumanB Cloud("Cloud");
        Cloud.setWeapon(sword);
        Cloud.attack();
        sword.setType("omnislash");
        Cloud.attack();
    }
    return (0);
}
