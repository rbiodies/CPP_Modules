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

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        // Code that could throw an exception
        Bureaucrat  bureaucrat("Test", 100);
        std::cout << bureaucrat << std::endl;
        bureaucrat.minus();
        std::cout << bureaucrat << std::endl;
        bureaucrat.plus();
        std::cout << bureaucrat << std::endl;
    }
    catch (std::exception & e)  // Base class for standard exceptions
    {
        // Code that executes when an exception of type
        // exception is thrown in the try block
        // ...
        // Log error message in the exception object
        std::cout << e.what() << std::endl; // The exception::what() used to get string identifying exception
    }

    std::cout << "\n";

    try
    {
        Bureaucrat  bureaucrat("Test", 0);
        std::cout << bureaucrat << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n";

    try
    {
        Bureaucrat  bureaucrat("Test", 151);
        std::cout << bureaucrat << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n";

    try
    {
        Bureaucrat  bureaucrat("Test", 1);
        std::cout << bureaucrat << std::endl;
        bureaucrat.minus();
        std::cout << bureaucrat << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n";

    try
    {
        Bureaucrat  bureaucrat("Test", 150);
        std::cout << bureaucrat << std::endl;
        bureaucrat.plus();
        std::cout << bureaucrat << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}