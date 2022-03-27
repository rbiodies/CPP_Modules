/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:22:07 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/13 15:22:07 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
    std::cout << "DiamondsTrap Default constructor called" << std::endl;
    _name = "EMPTY";
    _hit = FragTrap::_hit;
    _energy = ScavTrap::_energy;
    _attack = FragTrap::_attack;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), _name(name) {
    std::cout << "DiamondsTrap Default constructor of " << _name << " called" << std::endl;
    _hit = 100;
    _energy = 50;
    _attack = 30;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondsTrap Destructor called" << std::endl;
}

void    DiamondTrap::whoAmI() {
    std::cout << "DiamondsTrap's name is " << _name << std::endl;
    std::cout << "ClapTrap's name is " << ClapTrap::_name << std::endl;
}

void    DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}