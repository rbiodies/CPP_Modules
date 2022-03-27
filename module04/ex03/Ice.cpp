/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:02:18 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/19 09:33:12 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {

}

Ice::~Ice() {

}

Ice::Ice(const Ice &ice) {
    *this = ice;
}

Ice    &Ice::operator=(const Ice &ref) {
    if (this == &ref)
        return *this;
    _type = ref._type;
    return *this;
}

AMateria *Ice::clone() const {
    AMateria *amateria = new Ice();

    return amateria;
}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}