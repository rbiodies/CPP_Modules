//
// Created by Regulus Biodiesel on 3/2/22.
//

#ifndef C_PHONEBOOK_HPP
#define C_PHONEBOOK_HPP


class PhoneBook {
private:    // Access specifier
    void        add_contact(int i); // Method/function defined inside the class
    std::string check(std::string str);
    std::string check_number(std::string str);
    void        print_all(int i);
    void        syntax_print(std::string str);
    Contact     contact[8]; // Create an object of class Contact

public:
            PhoneBook();
            ~PhoneBook();
    int     add(int i);
    void    search(int i, int flag);
};


#endif //C_PHONEBOOK_HPP
