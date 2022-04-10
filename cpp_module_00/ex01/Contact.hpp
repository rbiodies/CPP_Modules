/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 10:53:43 by                   #+#    #+#             */
/*   Updated: 2022/03/06 09:31:54 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//
// Created by Regulus Biodiesel on 3/2/22.
//

#ifndef C_CONTACT_HPP
#define C_CONTACT_HPP

class Contact {
private:
    // Class attributes
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _phone_number;
    std::string _darkest_secret;

public:
    // Prototype of the constructor
                Contact();

    // Alternative definition of the constructor:
    //Contact(std::string f, std::string l, std::string n, std::string ph, std::string d);
    // Prototype of the destructor
                ~Contact();
    void        set_values(std::string f, std::string l, std::string n, std::string p, std::string d);
    std::string get_first_name(void);
    std::string get_last_name(void);
    std::string get_nickname(void);
    void        print(void) const;
};

#endif //C_CONTACT_HPP
