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

#ifndef C_DOG_HPP
#define C_DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:
    Dog();
    ~Dog();
    Dog &operator=(Dog const &ref);
    Dog(Dog const &dog);
    void makeSound() const;
};


#endif //C_DOG_HPP
