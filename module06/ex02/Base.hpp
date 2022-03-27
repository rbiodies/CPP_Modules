/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 15:14:20 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/23 15:14:20 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_BASE_HPP
#define C_BASE_HPP

#include <ctime>    // For time()
#include <cstdlib>  // For srand() and rand()
#include <iostream>    // endl

class Base {
public:
    virtual ~Base() {}
};

class A : public Base {};

class B : public Base {};

class C : public Base {};


#endif //C_BASE_HPP
