//
// Created by Regulus Biodiesel on 3/7/22.
//

#ifndef C_HUMANA_HPP
#define C_HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
private:
    Weapon      &_weapon;
    std::string _name;

public:
    HumanA( std::string name, Weapon &weapon );
    void    attack( void );
};


#endif //C_HUMANA_HPP
