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

#ifndef C_ANIMAL_HPP
#define C_ANIMAL_HPP

#include <iostream>

class Animal {
public:
    Animal();
    virtual         ~Animal();
    Animal          &operator=(Animal const &ref);
    Animal(Animal const &animal);
    Animal(std::string type);
    virtual void    makeSound() const = 0;
    std::string     getType() const;

protected:
    std::string _type;
};


#endif //C_ANIMAL_HPP
