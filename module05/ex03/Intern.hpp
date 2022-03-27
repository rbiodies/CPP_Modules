/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:37:42 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/21 16:37:42 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_INTERN_HPP
#define C_INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
public:
    Intern();
    ~Intern();
    Intern(Intern const &intern);
    Intern  &operator=(Intern const &ref);
    Form    *makeForm(std::string const &name, std::string const &target) const;
};


#endif //C_INTERN_HPP
