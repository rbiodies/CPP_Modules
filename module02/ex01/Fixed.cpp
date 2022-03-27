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

#include "Fixed.hpp"

//Default constructor called
//Int constructor called
//Float constructor called
//Copy constructor called
//Copy assignment operator called
//Float constructor called
//Copy assignment operator called
//Destructor called
//a is 1234.43
//b is 10
//c is 42.4219
//d is 10
//a is 1234 as integer
//b is 10 as integer
//c is 42 as integer
//d is 10 as integer
//Destructor called
//Destructor called
//Destructor called
//Destructor called

/* Notes:
    https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/

 	 shifting the bit pattern of a number to the right by 1 bit
	 always divide the number by 2
	 shifting the bit pattern of a number to the left by 1 bit
	 always multiplies the number by 2
*/

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    _fix_point = 0;
}

Fixed::Fixed(const int num_int) {
    std::cout << "Int constructor called" << std::endl;
    _fix_point = num_int << _bits;
}

Fixed::Fixed(const float num_float) {
    std::cout << "Float constructor called" << std::endl;
    _fix_point = roundf(num_float * (1 << _bits));    // pow(2, _bits);
}

int Fixed::getRawBits() const {
    return (_fix_point);
}

void Fixed::setRawBits(const int raw) {
    _fix_point = raw;
}

// We take the input value and divide it by (2fractional_bits), putting the result into a float
float   Fixed::toFloat() const {
    return ((float)_fix_point / (1 << _bits));
}

int Fixed::toInt() const {
    return (_fix_point >> _bits);
}

Fixed::Fixed(const Fixed &fixed) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed   &Fixed::operator = (const Fixed &ref) {
    std::cout << "Copy assignment operator called" << std::endl;
    _fix_point = ref.getRawBits();
    return (*this);
}

// << operator overload (not a member function!)
std::ostream &operator<<(std::ostream &outputStream, const Fixed &ref)
{
    outputStream << ref.toFloat();
    return (outputStream);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}