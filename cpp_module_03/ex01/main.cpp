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

int main(void)
{
    std::string s1 = "Hero";
    std::string s2 = "Evil";
    ClapTrap    hero(s1);
    ScavTrap    evil(s2);

    evil.guardGate();

    hero.attack(s2);
    evil.takeDamage(80);
    evil.beRepaired(30);
    evil.attack(s1);
    hero.takeDamage(20);
    hero.beRepaired(10);
    hero.attack(s2);
    evil.takeDamage(60);
    evil.beRepaired(10);
    evil.attack(s1);
    return 0;
}