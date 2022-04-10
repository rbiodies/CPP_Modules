//
// Created by Regulus Biodiesel on 3/7/22.
//

#ifndef C_HUMANB_HPP
#define C_HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private:
    std::string _name;
    Weapon      *_weapon;

public:
    HumanB( std::string name );
    void    setWeapon( Weapon &weapon );
    void    attack();
};


#endif //C_HUMANB_HPP
