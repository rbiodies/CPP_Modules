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

#ifndef C_DIAMONDTRAP_HPP
#define C_DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
    std::string _name;

public:
    DiamondTrap();
    ~DiamondTrap();
    DiamondTrap(std::string name);
    void    whoAmI();
    void    attack(const std::string& target);
};


#endif //C_DIAMONDTRAP_HPP
