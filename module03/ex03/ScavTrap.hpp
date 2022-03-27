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

#ifndef C_SCAVTRAP_HPP
#define C_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();
    void    attack(const std::string& target);
    void    guardGate();
};


#endif //C_SCAVTRAP_HPP
