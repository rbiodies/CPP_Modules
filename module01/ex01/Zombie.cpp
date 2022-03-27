//
// Created by Regulus Biodiesel on 3/6/22.
//

#include "Zombie.hpp"

void    Zombie::set_name(std::string name) {
    _name = name;
}

void    Zombie::announce() {
    std::cout << _name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "R.I.P " << _name << std::endl;
}