/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 09:36:44 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/19 12:44:13 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    std::cout << "Cat Default constructor called" << std::endl;
    _brain = new Brain("Some ideas of cat!");
}

Cat::~Cat() {
    std::cout << "Cat Destructor called" << std::endl;
    delete _brain;
}

Cat::Cat(Cat const &cat) {
    std::cout << "Cat Copy constructor called" << std::endl;
    _brain = new Brain(*(cat.getBrain()));
}

Cat &Cat::operator=(Cat const &ref) {
    std::cout << "Cat Copy assignment operator called" << std::endl;
    // When the left and right sides are the same object, directly return the object else leak
    if (this == &ref)
        return *this;
    delete _brain;
    _brain = new Brain();
    _brain = ref._brain;
    _type = ref._type;
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}

Brain   *Cat::getBrain() const {
    return _brain;
}