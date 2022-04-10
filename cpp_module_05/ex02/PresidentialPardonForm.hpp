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

#ifndef C_PRESIDENTIALPARDONFORM_HPP
#define C_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
public:
    PresidentialPardonForm();
    ~PresidentialPardonForm();
    PresidentialPardonForm(PresidentialPardonForm const &presidentialpardonform);
    PresidentialPardonForm  &operator=(PresidentialPardonForm const &ref);
    PresidentialPardonForm(std::string target);

private:
    std::string             _target;
    virtual void            execute(Bureaucrat const & executor) const;
};


#endif //C_PRESIDENTIALPARDONFORM_HPP
