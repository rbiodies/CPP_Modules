/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:22:11 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/16 16:22:11 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_WRONGANIMAL_HPP
#define C_WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
public:
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal &operator=(WrongAnimal const &ref);
    WrongAnimal(WrongAnimal const &wronganimal);
    WrongAnimal(std::string type);
    void makeSound() const;
    std::string getType() const;

protected:
    std::string _wrong_type;
};


#endif //C_WRONGANIMAL_HPP
