/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:22:11 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/16 16:22:11 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &wronganimal) {
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
    *this = wronganimal;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &ref) {
    std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
    _wrong_type = ref._wrong_type;
    return *this;
}

WrongAnimal::WrongAnimal(std::string wrongtype) {
    std::cout << "WrongAnimal Default constructor called with type called" << std::endl;
    _wrong_type = wrongtype;
}

void WrongAnimal::makeSound() const {
    std::cout << "Make wrong sound!" << std::endl;
}

std::string WrongAnimal::getType() const {
    return _wrong_type;
}