/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 09:36:37 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/16 09:36:37 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    std::cout << "Dog Default constructor called" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(Dog const &dog) {
    std::cout << "Dog Copy constructor called" << std::endl;
    *this = dog;
}

Dog &Dog::operator=(Dog const &ref) {
    std::cout << "Dog Copy assignment operator called" << std::endl;
    _type = ref._type;
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Bark!" << std::endl;
}