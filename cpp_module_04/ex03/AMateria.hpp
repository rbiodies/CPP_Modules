/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:44:04 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/17 16:44:04 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_AMATERIA_HPP
#define C_AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
protected:
    std::string _type;

public:
    AMateria(std::string const & type);
    AMateria();
    virtual ~AMateria();
    AMateria(AMateria const &amateria);
    AMateria    &operator=(AMateria const &ref);
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};


#endif //C_AMATERIA_HPP
