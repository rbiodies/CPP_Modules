//
// Created by Regulus Biodiesel on 3/6/22.
//

#include "Zombie.hpp"

void    randomChump( std::string name )
{
    Zombie zombie(name); // zombie is pushed on the call stack here
//    Zombie  *zombie = new Zombie(name);

    zombie.announce();
//    zombie->announce();
//    delete zombie;
}
