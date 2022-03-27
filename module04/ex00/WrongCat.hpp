/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:22:21 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/16 16:22:21 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_WRONGCAT_HPP
#define C_WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
    WrongCat();
    ~WrongCat();
    WrongCat &operator=(WrongCat const &ref);
    WrongCat(WrongCat const &wrongcat);
    void makeSound() const;
};


#endif //C_WRONGCAT_HPP
