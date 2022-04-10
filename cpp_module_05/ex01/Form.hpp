/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 16:42:56 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/20 16:42:56 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_FORM_HPP
#define C_FORM_HPP

#include "Bureaucrat.hpp"

//Forward definition. We don't have any member definition, just we are telling
//the compiler "Trust me, this is a class"
class Bureaucrat;

class Form {
public:
    Form();
    ~Form();
    Form(Form const &form);
    Form                &operator=(Form const &ref);
    Form(std::string name, int grade_sign, int grade_execute);
    const std::string   getName() const;
    bool                getSign() const;
    const int           getGradeSign() const;
    const int           getGradeExecute() const;
    void                beSigned(Bureaucrat const &bureaucrat);

private:
    const std::string   _name;
    bool                _sign;
    const int           _grade_sign;
    const int           _grade_execute;
class GradeTooHighException : public std::exception {
        const char *what() const throw();
    };
class GradeTooLowException : public std::exception {
        const char *what() const throw();
    };
};

std::ostream    &operator<<(std::ostream &out, Form const &form);

#endif //C_FORM_HPP
