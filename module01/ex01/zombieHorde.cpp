//
// Created by Regulus Biodiesel on 3/6/22.
//

#include "Zombie.hpp"

Zombie  *zombieHorde( int N, std::string name )
{
    Zombie  *zombie;
    int     i;

    if (N < 0)
        return (0);
    zombie = new Zombie[N];
    i = 0;
    while (i < N)
    {
        zombie[i].set_name(name);
        i++;
    }
    return (zombie);
}
