/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 10:53:47 by                   #+#    #+#             */
/*   Updated: 2022/03/06 09:31:54 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//
// Created by Regulus Biodiesel on 3/2/22.
//

#include "main.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{

}

void Contact::print(void) const
{
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "First Name: " << this->_first_name << std::endl;
    std::cout << "Last Name: " << this->_last_name << std::endl;
    std::cout << "Nickname: " << this->_nickname << std::endl;
    std::cout << "Phone Number: " << this->_phone_number << std::endl;
    std::cout << "Darkest Secret: " << this->_darkest_secret << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
}


std::string Contact::get_first_name(void) {
    return (_first_name);
}

std::string Contact::get_last_name(void) {
    return (_last_name);
}

std::string Contact::get_nickname(void)
{
    return (_nickname);
}

void Contact::set_values(std::string f, std::string l, std::string n, std::string p, std::string d)
{
    _first_name = f;
    _last_name = l;
    _nickname = n;
    _phone_number = p;
    _darkest_secret = d;
}
