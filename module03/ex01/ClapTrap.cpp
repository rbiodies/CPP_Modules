/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 09:34:47 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/13 09:34:47 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std::cout << "ClapTrap Default constructor called" << std::endl;
    _name = "EMPTY";
    _hit = 10;
    _energy = 10;
    _attack = 0;
}

ClapTrap::ClapTrap(std::string name) : _name(name) {
    std::cout << "ClapTrap Default constructor of " << _name << " called" << std::endl;
    _hit = 10;
    _energy = 10;
    _attack = 0;
}

ClapTrap::ClapTrap(std::string name, int hit, int energy, int attack) {
    std::cout << "ClapTrap constructor called" << std::endl;
    _name = name;
    _hit = hit;
    _energy = energy;
    _attack = attack;
}

ClapTrap::ClapTrap(ClapTrap const &claptrap) {
    std::cout << "Copy constructor called" << std::endl;
    *this = claptrap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ref) {
    std::cout << "Assignment operator called" << std::endl;
    _name = ref._name;
    _hit = ref._hit;
    _energy = ref._energy;
    _attack = ref._attack;
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
    if (_hit <= 0)
    {
        std::cout << "ClapTrap " << _name << " can't move..." << std::endl;
        return ;
    }
    if (_energy <= 0)
    {
        std::cout << "ClapTrap " << _name << " hasn't energy..." << std::endl;
        return ;
    }
    _energy --;
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "ClapTrap " << _name << " repairs itself, getting " << amount << " points!" << std::endl;
    _hit += amount;
    _energy--;
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
    _hit -= amount;
}