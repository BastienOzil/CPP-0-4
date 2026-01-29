/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:53:32 by bozil             #+#    #+#             */
/*   Updated: 2026/01/29 12:05:01 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* horde = new Zombie[N];
    
    for (int i = 0; i < N; i++)
    {
        horde[i].setName(name);
    }
    
    return horde;
}
