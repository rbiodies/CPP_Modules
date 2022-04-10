//
// Created by Regulus Biodiesel on 3/8/22.
//

#include "Karen.hpp"

Karen::Karen() {

}

Karen::~Karen() {

}

void    Karen::debug( void ) {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}

void    Karen::info( void ) {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void    Karen::warning( void ) {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void    Karen::error( void ) {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now.\n" << std::endl;
}

int    Karen::get_index( std::string level )
{
    bool    msg[] = {level == "DEBUG", level == "INFO", level == "WARNING", level == "ERROR"};
    int     i;

    i = 0;
    while (msg[i] == 0)
        i++;
    return (i);
}

void    Karen::complain(std::string level) {
    int     i;
    void    (Karen::*funcPTR[])(void) = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error };

    i = get_index(level);
    switch (i)
    {
        case (0):
            (this->*funcPTR[0])();
        case (1):
            (this->*funcPTR[1])();
        case (2):
            (this->*funcPTR[2])();
        case (3):
            (this->*funcPTR[3])();
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

