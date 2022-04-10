/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:11:51 by                   #+#    #+#             */
/*   Updated: 2022/03/06 09:31:54 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//
// Created by Regulus Biodiesel on 3/2/22.
//

#include "main.hpp"

// Constructor
PhoneBook::PhoneBook()
{

}

// Destructor
PhoneBook::~PhoneBook()
{

}

void PhoneBook::syntax_print(std::string str) {
    std::cout << "|" << std::setw(10);
    if (str.length() > 10)
        std::cout << str.substr(0, 9) + ".";    // string substr (size_t pos = 0, size_t len = npos) const;
    else
        std::cout << str;
}

void PhoneBook::print_all(int index)
{
    int i;

    std::cout << "|-------------------------------------------|" << std::endl;
    PhoneBook::syntax_print("Index");
    PhoneBook::syntax_print("First Name");
    PhoneBook::syntax_print("Last Name");
    PhoneBook::syntax_print("Nickname");
    std::cout << "|" << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;
    i = 0;
    while (i < index)
    {
        std::cout << "|" << std::setw(10) << i; // setw(10) = sets the width to 10 characters
        PhoneBook::syntax_print(contact[i].get_first_name());
        PhoneBook::syntax_print(contact[i].get_last_name());
        PhoneBook::syntax_print(contact[i].get_nickname());
        std::cout << "|" << std::endl;
        i++;
    }
    std::cout << "|-------------------------------------------|" << std::endl;
}

void PhoneBook::search(int i, int flag)
{
    std::string index;

    if (i == 0)
        std::cout << "\tError: Phone Book is empty!" << std::endl;
    else {
        if (flag == 1)
            i = 8;
        PhoneBook::print_all(i);
        std::cout << "Enter an index for more details: ";
        std::getline(std::cin, index);
        while (index < "0" || index > "7" || index.length() != 1) {
            if (index == "EXIT" || index == "exit")
                exit(EXIT_SUCCESS);
            std::cout << "Error: Enter integer index from 0 to 7 (no space)!" << std::endl;
            std::cout << "Enter an index for more details: " << std::endl;
            std::getline(std::cin, index);
        }
        if (stoi(index) < i)
            contact[stoi(index)].print();   // Returns a copy of phonebook[i]
        else
            std::cout << "\t\tError: Index not found!" << std::endl;
    }
}

std::string PhoneBook::check(std::string str)
{
    while (str.length() == 0)
    {
        std::cout << "\tError: Empty string!" << std::endl;
        std::cout << "Enter valid data: ";
        std::getline(std::cin, str);
    }
    if (str == "EXIT" || str == "exit")
        exit(EXIT_SUCCESS);
    return (str);
}

std::string PhoneBook::check_number(std::string str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str == "EXIT" || str == "exit")
            exit(EXIT_SUCCESS);
        if (str[i] < '0' || str[i] > '9')
        {
            std::cout << "\tError: Enter integer Phone Number from 0 to 9 (no space)!" << std::endl;
            std::cout << "Phone Number: ";
            std::getline(std::cin, str);
            i = 0;
        }
        i++;
    }
    return (str);
}

void    PhoneBook::add_contact(int i)
{
    std::string First_Name;
    std::string Last_Name;
    std::string Nickname;
    std::string Phone_Number;
    std::string Darkest_Secret;

    std::cout << "\tPlease, Enter:" << std::endl;
    std::cout << "First Name: ";
    std::getline(std::cin, First_Name);
    First_Name = PhoneBook::check(First_Name);
    std::cout << "Last Name: ";
    std::getline(std::cin, Last_Name);
    Last_Name = PhoneBook::check(Last_Name);
    std::cout << "Nickname: ";
    std::getline(std::cin, Nickname);
    Nickname = PhoneBook::check(Nickname);
    std::cout << "Phone Number: ";
    std::getline(std::cin, Phone_Number);
    Phone_Number = PhoneBook::check(Phone_Number);
    Phone_Number = PhoneBook::check_number(Phone_Number);
    std::cout << "Darkest Secret: ";
    std::getline(std::cin, Darkest_Secret);
    Darkest_Secret = PhoneBook::check(Darkest_Secret);
    contact[i].set_values(First_Name, Last_Name, Nickname, Phone_Number, Darkest_Secret);
}

int    PhoneBook::add(int i)
{
    if (i > 7)
    {
        std::cout << "Replace the oldest contact!" << std::endl;
        i = 0;
    }
    PhoneBook::add_contact(i);
    std::cout << "\tContact №"<< i + 1 << " is added to Phone Book!" << std::endl;
    i++;
    if (i == 8)
        std::cout << "\t\tPhone Book is complete!" << std::endl;
    return (i);
}