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

#ifndef C_BRAIN_HPP
#define C_BRAIN_HPP

#include <iostream>

class Brain {
private:
    std::string _ideas[100];

public:
    Brain();
    ~Brain();
    Brain &operator=(Brain const &ref);
    Brain(Brain const &brain);
    Brain(std::string str);
    std::string *getIdeas();
};


#endif //C_BRAIN_HPP
