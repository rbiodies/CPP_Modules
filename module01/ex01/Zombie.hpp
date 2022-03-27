//
// Created by Regulus Biodiesel on 3/6/22.
//

#ifndef C_ZOMBIE_HPP
#define C_ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
    std::string _name;

public:
    ~Zombie();
    void        announce();
    void        set_name(std::string name);
};

Zombie  *zombieHorde( int N, std::string name );

#endif //C_ZOMBIE_HPP
