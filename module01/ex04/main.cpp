//
// Created by Regulus Biodiesel on 3/7/22.
//

#include "Replace.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Error: Enter 3 arguments (file, be replaced, replace with)!" << std::endl;
        return (1);
    }

    Replace replace(argv[1], argv[2], argv[3]);

    replace.replace();
    return (0);
}