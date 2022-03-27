//
// Created by Regulus Biodiesel on 3/6/22.
//

#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout << _name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

// constructor
Zombie::Zombie( std::string name ) {
    _name = name;
}

// destructor
Zombie::~Zombie() {
    std::cout << "R.I.P " << _name << std::endl;
}