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

#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat  bureaucrat("Test", 150);
        Bureaucrat  bureaucrat1("Test1", 100);
        Form        form("List", 100, 50);
        std::cout << bureaucrat << std::endl;
        std::cout << bureaucrat1 << std::endl;
        std::cout << form << std::endl;
        bureaucrat.signForm(form);
        bureaucrat1.signForm(form);
        bureaucrat1.signForm(form);
        std::cout << form << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}