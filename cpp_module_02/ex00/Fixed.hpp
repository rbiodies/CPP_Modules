//
// Created by Regulus Biodiesel on 3/9/22.
//

#ifndef C_FIXED_HPP
#define C_FIXED_HPP

#include <iostream>

class Fixed {
private:
    int                 _fixed_point_num;
    const static int    _num_of_fractional_bits = 8;

public:
    Fixed();  // Default constructor: initialize fixed point value to 0
    Fixed( const Fixed &fixed );  //  Copy constructor
    Fixed &operator = (const Fixed &ref);    // Copy assignment operator overload
    ~Fixed();   // Destructor
    int     getRawBits( void ) const; // return the raw value of a fixed-point value
    void    setRawBits( int const raw );  // set the raw value of the fixed point value
};


#endif //C_FIXED_HPP
