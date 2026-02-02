/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone_class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 18:17:32 by bozil             #+#    #+#             */
/*   Updated: 2026/02/02 13:17:13 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phone_class.hpp"

Contact::Contact(void) {}
Contact::~Contact(void) {}

std::string Contact::get(int field) const
{
    if (field == 0) return firstName;
    if (field == 1) return lastName;
    if (field == 2) return nickname;
    if (field == 3) return phoneNumber;
    return darkestSecret;
}

void Contact::set(int field, std::string value)
{
    if (field == 0) firstName = value;
    else if (field == 1) lastName = value;
    else if (field == 2) nickname = value;
    else if (field == 3) phoneNumber = value;
    else darkestSecret = value;
}

bool Contact::isEmpty(void) const { return firstName.empty(); }

PhoneBook::PhoneBook(void) : contactCount(0), oldestIndex(0) {}
PhoneBook::~PhoneBook(void) {}

static void printColumn(std::string str)
{
    if (str.length() > 10)
        str = str.substr(0, 9) + ".";
    for (int i = str.length(); i < 10; i++)
        std::cout << " ";
    std::cout << str;
}

void PhoneBook::addContact(void)
{
    Contact newContact;
    std::string input, fields[5] = {"First Name", "Last Name", "Nickname", "Phone Number", "Darkest Secret"};
    
    for (int i = 0; i < 5; i++)
    {
        std::cout << fields[i] << ": ";
        std::getline(std::cin, input);
        if (input.empty())
        {
            std::cout << "Error: Field cannot be empty" << std::endl;
            return;
        }
        newContact.set(i, input);
    }
    contacts[oldestIndex] = newContact;
    oldestIndex = (oldestIndex + 1) % 8;
    if (contactCount < 8)
        contactCount++;
    std::cout << "Contact added successfully!" << std::endl;
}

void PhoneBook::searchContact(void) const
{
    if (contactCount == 0)
    {
        std::cout << "Phonebook is empty!" << std::endl;
        return;
    }
    std::string headers[4] = {"Index", "First Name", "Last Name", "Nickname"};
    for (int i = 0; i < 4; i++)
    {
        printColumn(headers[i]);
        if (i < 3) std::cout << "|";
    }
    std::cout << std::endl;
    for (int i = 0; i < contactCount; i++)
    {
        if (!contacts[i].isEmpty())
        {
            std::string idx = "0";
            idx[0] = '0' + i;
            printColumn(idx);
            for (int j = 0; j < 3; j++)
            {
                std::cout << "|";
                printColumn(contacts[i].get(j));
            }
            std::cout << std::endl;
        }
    }
    std::cout << "Enter index: ";
    std::string input;
    std::getline(std::cin, input);
    int index = input[0] - '0';
    if (input.length() != 1 || index < 0 || index > 7 || index >= contactCount || contacts[index].isEmpty())
    {
        std::cout << "Invalid index!" << std::endl;
        return;
    }
    std::string fields[5] = {"First Name", "Last Name", "Nickname", "Phone Number", "Darkest Secret"};
    for (int i = 0; i < 5; i++)
        std::cout << fields[i] << ": " << contacts[index].get(i) << std::endl;
}
