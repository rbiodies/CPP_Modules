/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 10:08:09 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/13 10:08:09 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    std::string s3 = "Angel";
    std::string s4 = "Devil";

    FragTrap    angel(s3);
    DiamondTrap devil(s4);

    devil.whoAmI();

    devil.attack(s3);
    angel.takeDamage(30);
    angel.beRepaired(100);
    angel.attack(s4);
    devil.takeDamage(30);
    devil.beRepaired(10);
    devil.attack(s3);
    return 0;
}