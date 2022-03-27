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

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) {
    _type = type;
}

AMateria::AMateria() {
    _type = "EMPTY";
}

AMateria::~AMateria() {

}

AMateria::AMateria(const AMateria &amateria) {
    *this = amateria;
}

AMateria    &AMateria::operator=(const AMateria &ref) {
    if (this == &ref)
        return *this;
    _type = ref._type;
    return *this;
}

std::string const & AMateria::getType() const {
    return _type;
}

void AMateria::use(ICharacter& target) {

}