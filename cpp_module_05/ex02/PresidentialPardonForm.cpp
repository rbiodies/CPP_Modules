/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 10:54:38 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/21 10:54:38 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
    Form("PresidentialPardonForm", 25, 5) {
    _target = "EMPTY";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
    Form("PresidentialPardonForm", 25, 5) {
    _target = target;
}

PresidentialPardonForm::~PresidentialPardonForm() {

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &presidentialpardonform) :
    Form(presidentialpardonform.getName(), presidentialpardonform.getGradeSign(), presidentialpardonform.getGradeExecute()) {
    _target = presidentialpardonform._target;
}

PresidentialPardonForm  &PresidentialPardonForm::operator=(const PresidentialPardonForm &ref) {
    if (this == &ref)
        return *this;
    _target = ref._target;
    return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
    Form::execute(executor);
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}