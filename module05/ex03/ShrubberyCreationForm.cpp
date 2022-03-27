/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 10:53:53 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/21 10:53:53 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
    Form("ShrubberyCreationForm", 145, 137) {
    _target = "EMPTY";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
    Form("ShrubberyCreationForm", 145, 137)
{
    _target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrubberycreationform) :
    Form(shrubberycreationform.getName(), shrubberycreationform.getGradeSign(), shrubberycreationform.getGradeExecute()) {
    _target = shrubberycreationform._target;
}

ShrubberyCreationForm  &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &ref) {
    if (this == &ref)
        return *this;
    _target = ref._target;
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    Form::execute(executor);
    std::ofstream ofs(_target + "_shrubbery");

    ofs << ASCII_TREE;
    ofs.close();
}