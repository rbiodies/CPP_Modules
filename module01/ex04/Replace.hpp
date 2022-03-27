//
// Created by Regulus Biodiesel on 3/8/22.
//

#ifndef C_REPLACE_HPP
#define C_REPLACE_HPP

#include <iostream> // std::
#include <fstream>  // open

class Replace {
private:
    std::string infile;
    std::string s1;
    std::string s2;
    void        check_line( std::string &str);

public:
    Replace( std::string argv1, std::string argv2, std::string argv3);
    ~Replace();
    void replace( void );
};


#endif //C_REPLACE_HPP
