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

#include "ClapTrap.hpp"

int main(void)
{
    std::string s1 = "Hero";
    std::string s2 = "Evil";
    ClapTrap    hero(s1);
    ClapTrap    evil(s2);

    hero.attack(s2);
    evil.takeDamage(5);
    evil.beRepaired(3);
    evil.attack(s1);
    hero.takeDamage(6);
    hero.beRepaired(2);
    hero.attack(s2);
    evil.takeDamage(10);
    evil.beRepaired(2);
    evil.attack(s1);
    return 0;
}