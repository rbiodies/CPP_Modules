/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 09:36:37 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/19 09:28:16 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    std::cout << "Dog Default constructor called" << std::endl;
    _brain = new Brain("Some ideas of dog!");
}

Dog::~Dog() {
    std::cout << "Dog Destructor called" << std::endl;
    delete _brain;
}

Dog::Dog(Dog const &dog) {
    std::cout << "Dog Copy constructor called" << std::endl;
    _brain = new Brain(*(dog.getBrain()));
}

Dog &Dog::operator=(Dog const &ref) {
    std::cout << "Dog Copy assignment operator called" << std::endl;
    // When the left and right sides are the same object, directly return the object else leak
    if (this == &ref)
        return *this;
    delete _brain;
    _brain = new Brain();
    _brain = ref._brain;
    _type = ref._type;
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Bark!" << std::endl;
}

Brain   *Dog::getBrain() const {
    return _brain;
}