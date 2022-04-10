/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:02:23 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/17 17:02:23 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_CURE_HPP
#define C_CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
public:
    Cure();
    ~Cure();
    Cure(Cure const &cure);
    Cure    &operator=(Cure const &ref);
    AMateria*   clone() const;
    void    use(ICharacter& target);
};


#endif //C_CURE_HPP
