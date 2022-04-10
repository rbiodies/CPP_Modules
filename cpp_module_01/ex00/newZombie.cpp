//
// Created by Regulus Biodiesel on 3/6/22.
//
#include "Zombie.hpp"

Zombie  *newZombie( std::string name )  //  we should return pointer
{
    Zombie *zombie;

    zombie = new Zombie(name); // "new" operator to allocate memory, this memory is allocated in the application’s heap segment
    return (zombie);
}
