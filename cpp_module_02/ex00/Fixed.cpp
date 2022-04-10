//
// Created by Regulus Biodiesel on 3/9/22.
//

#include "Fixed.hpp"

//Default constructor called
//Copy constructor called
//Copy assignment operator called // <-- This line may be missing depending on your implementation
//getRawBits member function called
//Default constructor called
//Copy assignment operator called
//getRawBits member function called
//getRawBits member function called
//0
//getRawBits member function called
//0
//getRawBits member function called
//0
//Destructor called
//Destructor called
//Destructor called

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    _fixed_point_num = 0;
}

Fixed::Fixed(const Fixed &fixed) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed   &Fixed::operator = (const Fixed &ref) {
    std::cout << "Copy assigment operator called" << std::endl;
    _fixed_point_num = ref.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (_fixed_point_num);
}

void Fixed::setRawBits( int const raw) {
    _fixed_point_num = raw;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}