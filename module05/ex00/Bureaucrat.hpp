/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 14:35:09 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/19 14:35:09 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_BUREAUCRAT_HPP
#define C_BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
public:
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(Bureaucrat const &bureaucrat);
    Bureaucrat          &operator=(Bureaucrat const &ref);
    Bureaucrat(std::string name, int grade);
    std::string         getName() const;
    int                 getGrade() const;
    void                plus();
    void                minus();

private:
    std::string const   _name;
    int                 _grade;
    // Nested classes
class GradeTooHighException : public std::exception {
        const char  *what() const throw();  // tells the compiler that the function does not throw any exceptions
    };
class GradeTooLowException : public std::exception {
        const char  *what() const throw();
    };
};

std::ostream   &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif //C_BUREAUCRAT_HPP
