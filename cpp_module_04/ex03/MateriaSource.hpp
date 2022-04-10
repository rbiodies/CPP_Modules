/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:21:39 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/17 18:21:39 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_MATERIASOURCE_HPP
#define C_MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(MateriaSource const &materiasource);
    MateriaSource    &operator=(MateriaSource const &ref);
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);

private:
    AMateria *_type[4];
};


#endif //C_MATERIASOURCE_HPP
