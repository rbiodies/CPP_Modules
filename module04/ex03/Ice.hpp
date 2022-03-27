/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:02:18 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/17 17:02:18 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_ICE_HPP
#define C_ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
public:
    Ice();
    ~Ice();
    Ice(Ice const &ice);
    Ice     &operator=(Ice const &ref);
    AMateria*    clone() const;
    void    use(ICharacter& target);
};


#endif //C_ICE_HPP
