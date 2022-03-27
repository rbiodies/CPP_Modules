/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:22:21 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/16 16:22:21 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
    std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &wrongcat) {
    std::cout << "WrongCat Copy constructor called" << std::endl;
    *this = wrongcat;
}

WrongCat &WrongCat::operator=(WrongCat const &ref) {
    std::cout << "WrongCat Copy assignment operator called" << std::endl;
    _wrong_type = ref._wrong_type;
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "WrongMeow!" << std::endl;
}