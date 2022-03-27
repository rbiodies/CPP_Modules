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

#ifndef C_ROBOTOMYREQUESTFORM_HPP
#define C_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm :public Form {
public:
    RobotomyRequestForm();
    ~RobotomyRequestForm();
    RobotomyRequestForm(RobotomyRequestForm const &robotomyrequestform);
    RobotomyRequestForm  &operator=(RobotomyRequestForm const &ref);
    RobotomyRequestForm(std::string target);

private:
    std::string             _target;
    virtual void            execute(Bureaucrat const & executor) const;
};


#endif //C_ROBOTOMYREQUESTFORM_HPP
