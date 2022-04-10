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

#ifndef C_CLAPTRAP_HPP
#define C_CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
public:
    ClapTrap();
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap(ClapTrap const &claptrap);
    ClapTrap    &operator=(ClapTrap const &ref);
    void        attack(const std::string& target);
    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);
    ClapTrap(std::string name, int hit, int energy, int attack);

protected:
    std::string _name;
    int         _hit;
    int         _energy;
    int         _attack;
};

#endif //C_CLAPTRAP_HPP
