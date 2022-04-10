/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:11:38 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/19 09:32:56 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
    for (int i = 0; i < 4; i++)
        _type[i] = NULL;
}

Character::Character(std::string name) {
    _name = name;
    for (int i = 0; i < 4; i++)
        _type[i] = NULL;
}

Character::~Character() {
    for (int i = 0; i < 4; i++)
        delete _type[i];
}

Character::Character(const Character &character) {
    _name = character._name;
    for (int i = 0; i < 4; i++)
        _type[i] = character._type[i]->clone();
}

Character    &Character::operator=(const Character &ref) {
    if (this == &ref)
        return *this;
    for (int i = 0; i < 4; i++) {
        if (_type[i] != NULL)
            delete _type[i];
        _type[i] = ref._type[i]->clone();
    }
    return *this;
}

std::string const   &Character::getName() const {
    return _name;
}

void Character::equip(AMateria *m) {
    for (int i = 0; i < 4; i++) {
        if (_type[i] == NULL) {
            _type[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx) {
    if (_type[idx])
        _type[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
    if (_type[idx])
        _type[idx]->use(target);
}