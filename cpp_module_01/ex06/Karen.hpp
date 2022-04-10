//
// Created by Regulus Biodiesel on 3/8/22.
//

#ifndef C_KAREN_HPP
#define C_KAREN_HPP

#include <iostream>

class Karen {
private:
    void    debug( void );
    void    info( void );
    void    warning( void );
    void    error( void );
    int     get_index( std::string level );

public:
    Karen();
    ~Karen();
    void    complain( std::string level );
};


#endif //C_KAREN_HPP
