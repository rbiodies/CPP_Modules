/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:02:23 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/19 09:33:12 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {

}

Cure::~Cure() {

}

Cure::Cure(const Cure &cure) {
    *this = cure;
}

Cure    &Cure::operator=(const Cure &ref) {
    if (this == &ref)
        return *this;
    _type = ref._type;
    return *this;
}

AMateria    *Cure::clone() const {
    AMateria    *amateria = new Cure();

    return amateria;
}

void Cure::use(ICharacter &target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}