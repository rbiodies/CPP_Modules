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

#ifndef C_CAT_HPP
#define C_CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
public:
    Cat();
    ~Cat();
    Cat     &operator=(Cat const &ref);
    Cat(Cat const &cat);
    void    makeSound() const;
    Brain   *getBrain() const;

private:
    Brain   *_brain;
};


#endif //C_CAT_HPP
