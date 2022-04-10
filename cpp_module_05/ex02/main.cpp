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

int main()
{
    try
    {
        Bureaucrat              bureaucrat("Test", 25);
        Bureaucrat              bureaucrat1("Boss", 6);
        ShrubberyCreationForm   sh("home");
        RobotomyRequestForm     rob("Work");
        PresidentialPardonForm  pres("John");

        bureaucrat.signForm(sh);
        bureaucrat1.executeForm(sh);
        bureaucrat.signForm(rob);
        bureaucrat1.executeForm(rob);
        bureaucrat.signForm(pres);
        bureaucrat1.executeForm(pres);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}