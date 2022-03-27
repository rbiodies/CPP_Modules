//
// Created by Regulus Biodiesel on 3/7/22.
//

#include "HumanB.hpp"

void HumanB::attack() {
    if (_weapon != NULL)
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
    else
        std::cout << _name << " tries to attack but has no weapon " << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
    _weapon = &weapon;
}

HumanB::HumanB( std::string name )
{
    _name = name;
    _weapon = NULL; // Constructor (HumanB = without weapon)
}