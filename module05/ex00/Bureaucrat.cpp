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

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {

}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    _grade = grade;
    // The throw keyword throws an exception when a problem is detected, which lets us create a custom error
    if (_grade < 1) throw GradeTooHighException();
    if (_grade > 150) throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {

}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : _name(bureaucrat._name) {
    _grade = bureaucrat._grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &ref) {
    if (this != &ref)
        _grade = ref._grade;
    return *this;
}

std::string Bureaucrat::getName() const
{
    return _name;
}

int Bureaucrat::getGrade() const {
    return _grade;
}

std::ostream   &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
    return out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
}

void Bureaucrat::minus() {
    if (_grade == 1) throw GradeTooHighException();
    _grade--;
}

void Bureaucrat::plus() {
    if (_grade == 150) throw GradeTooLowException();
    _grade++;
}

// throw () is an exception specification which prevents it from throwing any exceptions
char const    *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

char const    *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}
