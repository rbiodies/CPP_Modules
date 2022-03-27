/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:11:38 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/17 18:11:38 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_CHARACTER_HPP
#define C_CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
public:
    Character();
    ~Character();
    Character(Character const &character);
    Character   &operator=(Character const &ref);
    Character(std::string name);
    std::string const & getName() const;
    void        equip(AMateria* m);
    void        unequip(int idx);
    void        use(int idx, ICharacter& target);

private:
    std::string _name;
    AMateria    *_type[4];
};


#endif //C_CHARACTER_HPP
