/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 09:36:44 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/16 09:36:44 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat(Cat const &cat) {
    std::cout << "Cat Copy constructor called" << std::endl;
    *this = cat;
}

Cat &Cat::operator=(Cat const &ref) {
    std::cout << "Cat Copy assignment operator called" << std::endl;
    _type = ref._type;
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}