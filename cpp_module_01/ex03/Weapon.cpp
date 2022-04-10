//
// Created by Regulus Biodiesel on 3/7/22.
//

#include "Weapon.hpp"

void Weapon::setType( std::string other_type ) {
    _type = other_type;
}

std::string const &Weapon::getType() {
    return (_type);
}

Weapon::Weapon( std::string type ) {
    _type = type;
}