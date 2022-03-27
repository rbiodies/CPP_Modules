/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 12:10:12 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/13 12:10:12 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("EMPTY", 100, 50, 20) {
    std::cout << "ScavTrap Default constructor called " << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {
    std::cout << "ScavTrap Default constructor of " << _name << " called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    if (_hit <= 0)
    {
        std::cout << "ScavTrap " << _name << " can't move..." << std::endl;
        return ;
    }
    if (_energy <= 0)
    {
        std::cout << "ScavTrap " << _name << " hasn't energy..." << std::endl;
        return ;
    }
    _energy --;
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap is now in Gate keeper mode " << std::endl;
}