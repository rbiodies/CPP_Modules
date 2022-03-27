/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:10:57 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/16 18:10:57 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain Default constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        _ideas[i] = "idea $i";
}

Brain::Brain(std::string str) {
    std::cout << "Brain Default constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        _ideas[i] = str;
}

Brain::~Brain() {
    std::cout << "Brain Destructor called" << std::endl;
}

Brain::Brain(Brain const &brain) {
    std::cout << "Brain Copy constructor called" << std::endl;
    *this = brain;
}

Brain &Brain::operator=(Brain const &ref) {
    std::cout << "Brain Copy assignment operator called" << std::endl;
    for (int i = 0; i < 100; i++)
        _ideas[i] = ref._ideas[i];
    return *this;
}

std::string *Brain::getIdeas() {
    return _ideas;
}