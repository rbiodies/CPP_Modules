/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 14:33:23 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/19 14:33:23 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
        Intern      someRandomIntern;
        Form*       rrf;
        Bureaucrat  bureaucrat("Boss", 50);
        Form*       scf;
        Form*       ppf;
        Form*       error;

        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        std::cout << *rrf << std::endl;
        bureaucrat.signForm(*rrf);
        bureaucrat.executeForm(*rrf);
        scf = someRandomIntern.makeForm("shrubbery creation", "home");
        bureaucrat.signForm(*scf);
        bureaucrat.executeForm(*scf);
        ppf = someRandomIntern.makeForm("presidential pardon", "John");
        bureaucrat.signForm(*ppf);
        bureaucrat.executeForm(*ppf);
        error = someRandomIntern.makeForm("robotomy requestt", "Error_Bender");
        bureaucrat.signForm(*error);
        bureaucrat.executeForm(*error);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}