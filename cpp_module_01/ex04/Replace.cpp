//
// Created by Regulus Biodiesel on 3/8/22.
//

#include "Replace.hpp"

Replace::~Replace() {

}

void Replace::check_line( std::string &str )
{
    int pos;

    pos = str.find(s1);
    while (pos != -1)
    {
        str.erase(pos, s1.length());
        str.insert(pos, s2);
        pos = str.find(s1);
    }
}

void Replace::replace( void )
{
    std::ifstream   fs_in;
    std::string     outfile;
    std::ofstream   fs_out;
    std::string     str;

    if (infile.length() == 0 || s1.length() == 0 || s2.length() == 0)
    {
        std::cout << "Error: Arguments is empty!" << std::endl;
        exit(EXIT_FAILURE);
    }
    fs_in.open(infile);
    if (fs_in.is_open() == 0)
    {
        std::cout << "Error: Input file is not opened!" << std::endl;
        exit(EXIT_FAILURE);
    }
    // The class ios_base is a multipurpose class that serves as the base class for all I/O stream classes
    fs_in.seekg(0, std::ios::end);  // put the "cursor" at the end of the file
    if (fs_in.tellg() == 0) // find the position of the cursor
    {
        std::cout << "Error: Input file is empty!" << std::endl;
        exit(EXIT_FAILURE);
    }
    fs_in.seekg(0, std::ios::beg);  // move the locator back to the front
//    if (fs_in.peek() == EOF)
//    {
//        std::cout << "Error: Empty file is not opened!" << std::endl;
//        exit(EXIT_FAILURE);
//    }
    outfile = infile + ".replace";
    fs_out.open(outfile);
    if (fs_out.is_open() == 0)
    {
        std::cout << "Error: Output file is not created!" << std::endl;
        fs_in.close();
        exit(EXIT_FAILURE);
    }
    while (std::getline(fs_in, str))
    {
        check_line(str);
        fs_out << str << std::endl;
    }
    fs_in.close();
    fs_out.close();
}

Replace::Replace( std::string argv1, std::string argv2, std::string argv3)
{
    infile = argv1;
    s1 = argv2;
    s2 = argv3;
}