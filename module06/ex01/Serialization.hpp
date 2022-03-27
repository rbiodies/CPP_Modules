/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:02:45 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/23 12:02:45 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_SERIALIZATION_HPP
#define C_SERIALIZATION_HPP

#include <stdint.h> // uintptr_r
#include <iostream> // std

struct Data {
    Data(int i, char c, float f, double d) : _i(i), _c(c), _f(f), _d(d) {}
    int     _i;
    char    _c;
    float   _f;
    double  _d;
};

class Serialization {
public:
    Serialization();
    ~Serialization();
    Serialization(Serialization const &serialization);
    Serialization   &operator=(Serialization const &ref);
    // uintptr_t
    // an unsigned integer type with the property that any
    // valid pointer to void can be converted to this type, then converted back to
    // pointer to void, and the result will compare equal to the original pointer
    uintptr_t   serialize(Data* ptr);
    // Data*
    // Returns a pointer to an array that contains the same sequence of characters as the characters
    // that make up the value of the string object
    Data*   deserialize(uintptr_t raw);
};

std::ostream &operator<<(std::ostream &out, Data const &data);

#endif //C_SERIALIZATION_HPP
