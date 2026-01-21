/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone_class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 18:25:42 by bozil             #+#    #+#             */
/*   Updated: 2026/01/20 22:18:09 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_CLASS_HPP
# define PHONE_CLASS_HPP

# include <iostream>

class Contact
{
    private:
        std::string    firstName;
        std::string    lastName;
        std::string    nickname;
        std::string    phoneNumber;
        std::string    darkestSecret;

    public:
        Contact(void);
        ~Contact(void);
        
        std::string get(int field) const;
        void set(int field, std::string value);
        bool isEmpty(void) const;
};


class PhoneBook
{
    private:
        Contact contacts[8];
        int     contactCount;
        int     oldestIndex;
        
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        
        void addContact(void);
        void searchContact(void) const;
};

#endif