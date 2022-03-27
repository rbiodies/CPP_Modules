//
// Created by Regulus Biodiesel on 3/6/22.
//

#include "Zombie.hpp"

int main(void)
{
    Zombie  *zombie;

    randomChump("Faa");
    zombie = newZombie("Foo");
    zombie->announce();
    delete zombie;  // free memory is allocated in the application’s heap segment with by using new (malloc)
    return (0);
}