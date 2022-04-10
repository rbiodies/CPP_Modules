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

#include "Form.hpp"

Form::Form() : _name("EMPTY"), _grade_execute(1), _grade_sign(1) {
    _sign = false;
}

Form::Form(std::string const &name, int grade_sign, int grade_execute) : _name(name), _grade_sign(grade_sign), _grade_execute(grade_execute) {
    _sign = false;
    if (_grade_sign > 150 || _grade_execute > 150) throw GradeTooLowException();
    if (_grade_sign < 1 || _grade_execute < 1) throw GradeTooHighException();
}

Form::~Form() {

}

Form::Form(const Form &form) : _name(form._name), _grade_sign(form._grade_sign), _grade_execute(form._grade_execute) {
    _sign = form.getSign();
}

Form &Form::operator=(const Form &ref) {
    if (this == &ref)
        return *this;
    _sign = ref.getSign();
    return *this;
}

const std::string Form::getName() const {
    return _name;
}

const int Form::getGradeExecute() const {
    return _grade_execute;
}

const int Form::getGradeSign() const {
    return _grade_sign;
}

bool Form::getSign() const {
    return _sign;
}

void Form::beSigned(Bureaucrat const &bureaucrat) {
    // the base class for all exceptions thrown to report errors
    if (_sign == 1) throw std::runtime_error("Form already signed");
    if (bureaucrat.getGrade() > _grade_sign) throw GradeTooLowException();
    _sign = true;
}

char const *Form::GradeTooHighException::what() const throw() {
    return "Grade too high!";
}

char const *Form::GradeTooLowException::what() const throw() {
    return "Grade too low!";
}

std::ostream &operator<<(std::ostream &out, Form const &form) {
    out << form.getName() << ", form sign grade " << form.getGradeSign() << std::endl;
    out << form.getName() << ", form execute grade " << form.getGradeExecute() << std::endl;
    out << form.getName() << ", form sign " << form.getSign();
    return out;
}

void Form::execute(Bureaucrat const & executor) const {
    if (_sign == 0) throw std::runtime_error("Form didn't sign");
    if (executor.getGrade() > _grade_execute) throw GradeTooLowException();
}