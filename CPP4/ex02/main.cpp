/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 23:46:15 by bozil             #+#    #+#             */
/*   Updated: 2026/02/10 22:05:09 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{

    const Animal *j = new Dog();
    const Animal *i = new Cat();

    delete j;
    delete i;

    std::cout << std::endl;

    const int size = 4;
    Animal *animals[size];

    for (int idx = 0; idx < size / 2; idx++)
        animals[idx] = new Dog();
    for (int idx = size / 2; idx < size; idx++)
        animals[idx] = new Cat();

    for (int idx = 0; idx < size; idx++)
        delete animals[idx];

    std::cout << std::endl;

    Dog basic;
    {
        Dog tmp = basic;
    }

    return 0;
}
