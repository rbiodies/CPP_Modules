//
// Created by Regulus Biodiesel on 3/9/22.
//

#include "Fixed.hpp"
#include <iostream>

int main( void ) {

    Fixed a;    // Default constructor (raw bits initialized at 0)
    Fixed b( a );   // Copy constructor
    Fixed c;    // Default constructor (raw bits initialized at 0)

    c = b;  // '=' operator overload

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    return 0;
}
