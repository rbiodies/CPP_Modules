/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 09:21:43 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/16 09:21:43 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal Default constructor called" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal Destructor called" << std::endl;
}

Animal::Animal(Animal const &animal) {
    std::cout << "Animal Copy constructor called" << std::endl;
    *this = animal;
}

Animal &Animal::operator=(Animal const &ref) {
    std::cout << "Animal Copy assignment operator called" << std::endl;
    _type = ref._type;
    return *this;
}

Animal::Animal(std::string type) {
    std::cout << "Animal Default constructor called with type called" << std::endl;
    _type = type;
}

std::string Animal::getType() const {
    return _type;
}

void Animal::makeSound() const {
    std::cout << "Make sound!" << std::endl;
}