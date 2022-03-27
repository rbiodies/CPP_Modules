/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:26:53 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/10 12:26:53 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef C_FIXED_HPP
#define C_FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
public:
    Fixed();    // Default constructor: initialize fixed point value to 0
    Fixed( const Fixed &fixed );    // Copy constructor
    Fixed &operator = (const Fixed &ref);   // assignment operator overload
    ~Fixed();   // Destructor
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    // Constructor: A constructor that takes an integer as a parameter and converts it to a fixed(8) point value.
    // The bit value of decimal places is initialized as ex00.
    Fixed( const int num_int );
    // Constructor: A constructor that takes a floating point as a parameter and converts it to a fixed(8) decimal value.
    // The decimal bit value is initialized as ex00.
    Fixed( const float num_float );
    float   toFloat( void ) const;  // fixed point value to floating point value
    // Convert a fixed point value to an integer value
    int     toInt( void ) const;

private:
    const static int    _bits = 8;  // Static constant to store the number of decimal bits, the number of digits of this constant is 8.
    int                 _fix_point;   // Integer to store the fixed point value
};

//An overload of the insertion («) operator that inserts a floating-point representation
//of the fixed-point number into the output stream object passed as parameter.
std::ostream &operator<<(std::ostream &outputStream, const Fixed &ref);

#endif //C_FIXED_HPP
