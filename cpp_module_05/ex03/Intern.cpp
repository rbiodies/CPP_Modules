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

#include "Intern.hpp"

Intern::Intern() {

}

Intern::~Intern() {

}

Intern::Intern(const Intern &intern) {
    *this = intern;
}

Intern &Intern::operator=(const Intern &ref) {
    return *this;
}

Form    *Intern::makeForm(std::string const &name, std::string const &target) const {
    bool    form[] = {name == "shrubbery creation", name == "robotomy request", name == "presidential pardon"};
    int     i;

    i = 0;
    while (form[i] == 0)
        i++;
    switch (i) {
        case(0):
            std::cout << "Intern creates " << name << std::endl;
            return new ShrubberyCreationForm(target);
        case(1):
            std::cout << "Intern creates " << name << std::endl;
            return new RobotomyRequestForm(target);
        case(2):
            std::cout << "Intern creates " << name << std::endl;
            return new PresidentialPardonForm(target);
        default:
            throw std::runtime_error("This form doesn't exist");
    }
}