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

int main(void)
{
    std::string s1 = "Hero";
    std::string s2 = "Evil";
    std::string s3 = "Angel";
    ClapTrap    hero(s1);
    ScavTrap    evil(s2);
    FragTrap    angel(s3);

    evil.guardGate();
    angel.highFivesGuys();

    hero.attack(s2);
    evil.takeDamage(80);
    evil.beRepaired(30);
    evil.attack(s1);
    hero.takeDamage(6);
    hero.beRepaired(20);
    angel.attack(s2);
    evil.takeDamage(60);
    evil.beRepaired(10);
    evil.attack(s1);
    return 0;
}