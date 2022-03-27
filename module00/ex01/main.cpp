/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:02:03 by                   #+#    #+#             */
/*   Updated: 2022/03/06 09:31:54 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(void)
{
    int         i;
    std::string cmd;
    PhoneBook   phonebook;  // Create an object of class PhoneBook
    int         flag;

    std::cout << "\tWelcome to Phone Book!" << std::endl;
    i = 0;
    flag = 0;
    while (std::cin.eof() == 0)
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT):" << std::endl;
        std::cout << ">> ";
        std::getline(std::cin, cmd);
        if (cmd == "ADD" || cmd == "add")
        {
            i = phonebook.add(i);   // Call the method
            if (i > 7)
                flag = 1;
        }
        else if (cmd == "SEARCH" || cmd == "search")
            phonebook.search(i, flag);
        else if (cmd == "EXIT" || cmd == "exit")
        {
            std::cout << "\t\tGoodbye!" << std::endl;
            break ;
        }
        else
            std::cout << "\tError: This command doesn't exist!" << std::endl;
    }
    return (0);
}

