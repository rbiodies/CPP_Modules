//
// Created by Regulus Biodiesel on 3/6/22.
//

#ifndef C_ZOMBIE_HPP
#define C_ZOMBIE_HPP

#include <iostream> // std::

class Zombie {
private:
    std::string _name;

public:
    void    announce( void );
    Zombie( std::string name );
    ~Zombie();
};

Zombie  *newZombie( std::string name );
void    randomChump( std::string name );

#endif //C_ZOMBIE_HPP
