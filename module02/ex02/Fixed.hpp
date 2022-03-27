/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 11:20:59 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/11 11:20:59 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef C_FIXED_HPP
#define C_FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
public:
    Fixed();    // default constructor: initialize fixed point value to 0
    ~Fixed();   //  destructor
    Fixed(Fixed const &fixed);    // copy constructor
    Fixed const     &operator = (const Fixed &ref); // assignment operator overload
    int             getRawBits( void ) const;   // return the raw value of a fixed-point value
    void            setRawBits( int const raw );    // set the raw value of the fixed point value
    float           toFloat( void ) const;  // fixed point value to floating point value
    // Convert a fixed point value to an integer value
    int             toInt( void ) const;
    // Constructor: A constructor that takes an integer as a parameter and converts it to a fixed(8) point value.
    // The bit value of decimal places is initialized as ex00.
    Fixed(int num_int);
    // Constructor: A constructor that takes a floating point as a parameter and converts it to a fixed(8) decimal value.
    // The decimal bit value is initialized as ex00.
    Fixed(float num_float);
    // Six comparison operators: >, <, >=, <=, ==, and !=.
    bool            operator>(Fixed const &ref) const;
    bool            operator<(Fixed const &ref) const;
    bool            operator>=(Fixed const &ref) const;
    bool            operator<=(Fixed const &ref) const;
    bool            operator==(Fixed const &ref) const;
    bool            operator!=(Fixed const &ref) const;
    // Four arithmetic operators: +, -, *, and /.
    Fixed const     operator+(Fixed const &ref);
    Fixed const     operator-(Fixed const &ref);
    Fixed const     operator*(Fixed const &ref);
    Fixed const     operator/(Fixed const &ref);
    // pre-increment, post-increment, pre-decrement, and post-decrement operators
    Fixed const     operator++();
    Fixed const     operator++(int);
    Fixed const     operator--();
    Fixed const     operator--(int);
    // member function
    Fixed static    min(Fixed a, Fixed b);
    Fixed static    max(Fixed a, Fixed b);

private:
    // Static constant to store the number of decimal bits, the number of digits of this constant is 8.
    const static int    _bits = 8;
    int                 _fix_point; // Integer to store the fixed-point value
};

std::ostream    &operator<<(std::ostream &out, Fixed const &ref);

#endif //C_FIXED_HPP
