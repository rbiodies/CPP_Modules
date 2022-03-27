/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 10:54:19 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/21 10:54:19 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
    Form("RobotomyRequestForm", 72, 45) {
    _target = "EMPTY";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
    Form("RobotomyRequestForm", 72, 45) {
    _target = target;
}

RobotomyRequestForm::~RobotomyRequestForm() {

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotomyrequestform) :
        Form(robotomyrequestform.getName(), robotomyrequestform.getGradeSign(), robotomyrequestform.getGradeExecute()) {
    _target = robotomyrequestform._target;
}

RobotomyRequestForm  &RobotomyRequestForm::operator=(const RobotomyRequestForm &ref) {
    if (this == &ref)
        return *this;
    _target = ref._target;
    return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    Form::execute(executor);
    // This program will create different sequence of
    // random numbers on every program run

    // Use current time as seed for random generator
    // 453 1432 325 89
    // 8976 21234 45 8975
    // 563 9873 12321 24132
    srand(time(NULL));  // randomize seed
    std::cout << "* drilling noises *" << std::endl;
    if (rand() % 2 == 0) // in the range 0 to 1
        std::cout << _target << " has been robotomized successfully" << std::endl;
    else
        std::cout << "The robotomy failed" << std::endl;
}