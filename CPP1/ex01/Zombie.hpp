/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 09:05:50 by bozil             #+#    #+#             */
/*   Updated: 2026/01/29 11:55:20 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string name;
    
    public:
        Zombie(void);
        Zombie(std::string zombieName);
        ~Zombie(void);
        void announce(void);
        void setName(std::string zombieName);
};

Zombie* newZombie(std::string name);
Zombie* zombieHorde( int N, std::string name);
void randomChump(std::string name);

#endif