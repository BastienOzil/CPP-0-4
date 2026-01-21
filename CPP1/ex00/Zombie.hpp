/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 09:05:50 by bozil             #+#    #+#             */
/*   Updated: 2026/01/21 10:15:04 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

/*#include <string>*/
#include <iostream>

class Zombie
{
    private:
        std::string name;
    
    public:
        Zombie(std::string zombieName);
        ~Zombie(void);
        void announce(void);
};

#endif