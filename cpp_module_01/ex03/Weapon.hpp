//
// Created by Regulus Biodiesel on 3/7/22.
//

#ifndef C_WEAPON_HPP
#define C_WEAPON_HPP

#include <iostream>

class Weapon {
private:
    std::string _type;

public:
    Weapon( std::string type );
    std::string const   &getType( void );   // returns a const reference to type
    void                setType( std::string other_type );
};


#endif //C_WEAPON_HPP
