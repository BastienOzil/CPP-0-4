/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 18:40:10 by bozil             #+#    #+#             */
/*   Updated: 2026/01/20 21:51:43 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phone_class.hpp"

int main(void)
{
    PhoneBook phonebook;
    std::string command;
    
    while (1)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);
        
        if (std::cin.eof())
            break;
        
        if (command == "ADD")
            phonebook.addContact();
        else if (command == "SEARCH")
            phonebook.searchContact();
        else if (command == "EXIT")
            break;
    }
    
    return 0;
}