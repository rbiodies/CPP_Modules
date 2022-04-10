//
// Created by Regulus Biodiesel on 3/6/22.
//

#include "Zombie.hpp"

int main(void) {
    Zombie *zombie;
    int     N;
    int     i;

    N = 5;
    zombie = zombieHorde(N, "Foo");
    if (zombie == NULL)
        return (1);
    while (i < N) {
        zombie->announce();
        i++;
    }
    delete[] zombie;
    return (0);
}
