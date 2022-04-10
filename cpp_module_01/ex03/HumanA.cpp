//
// Created by Regulus Biodiesel on 3/7/22.
//

#include "HumanA.hpp"

void HumanA::attack() {
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

// Although value of the reference _weapon can set in the constructor,
// by the time the instruction code from the constructor body starts executing,
// the reference _weapon should already be initialized.
// And for this you need to use initialization lists

HumanA::HumanA( std::string name, Weapon &weapon) : _weapon(weapon)
{
    _name = name;
}