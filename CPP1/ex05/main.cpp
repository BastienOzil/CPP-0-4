/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 14:25:09 by bozil             #+#    #+#             */
/*   Updated: 2026/01/29 12:26:05 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(void)
{
    Harl harl;

    std::cout << "Test all Harl levels:" << std::endl;
    std::cout << std::endl;

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");

    /*std::cout << "Test invalid level:" << std::endl;
    std::cout << std::endl;

    harl.complain("INVALID");
    harl.complain("debug");
    harl.complain("");*/

    return (0);
}
