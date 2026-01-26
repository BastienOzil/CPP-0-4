/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 14:25:09 by bozil             #+#    #+#             */
/*   Updated: 2026/01/26 15:00:49 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(void)
{
    Harl harl;

    std::cout << "=== Testing all Harl levels ===" << std::endl;
    std::cout << std::endl;

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");

    std::cout << "=== Testing invalid level ===" << std::endl;
    std::cout << std::endl;

    harl.complain("INVALID");
    harl.complain("debug");
    harl.complain("");

    return (0);
}
