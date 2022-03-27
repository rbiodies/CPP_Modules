/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:21:39 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/17 18:21:39 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++)
        _type[i] = NULL;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++)
        delete _type[i];
}

MateriaSource::MateriaSource(const MateriaSource &materiasource) {
    *this = materiasource;
}

MateriaSource    &MateriaSource::operator=(const MateriaSource &ref) {
    if (this == &ref)
        return *this;
    for (int i = 0; i < 4; i++)
        _type[i] = ref._type[i];
    return *this;
}

void    MateriaSource::learnMateria(AMateria *m) {
    for (int i = 0; i < 4; i++)
    {
        if (_type[i] == NULL) {
            _type[i] = m;
            return;
        }
    }
}

AMateria    *MateriaSource::createMateria(const std::string &type) {
    for (int i = 0; i < 4; i++)
    {
        if (_type[i] != NULL && _type[i]->getType() == type) {
            return (_type[i]->clone());
        }
    }
    return 0;
}