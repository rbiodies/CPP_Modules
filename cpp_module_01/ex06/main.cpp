//
// Created by Regulus Biodiesel on 3/8/22.
//

#include "Karen.hpp"

int main(int argc, char **argv)
{
    Karen   k;

    if (argc != 2)
    {
        std::cout << "Error: Enter what you want to listen!" << std::endl;
        return (1);
    }
    k.complain(argv[1]);
    return (0);
}