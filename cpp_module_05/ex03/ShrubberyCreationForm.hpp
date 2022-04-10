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

#ifndef C_SHRUBBERYCREATIONFORM_HPP
#define C_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

#define ASCII_TREE \
"              * *\n"				\
"           *    *  *\n"			\
"      *  *    *     *  *\n"		\
"     *     *    *  *    *\n"		\
" * *   *    *    *    *   *\n"		\
" *     *  *    * * .#  *   *\n"	\
" *   *     * #.  .# *   *\n"		\
"  *     \"#.  #: #\" * *    *\n"	\
" *   * * \"#. ##\"       *\n"		\
"   *       \"###\n"				\
"             \"##\n"				\
"              ##.\n"				\
"              .##:\n"				\
"              :###\n"				\
"              ;###\n"				\
"            ,####.\n"				\
"           .######.\n"

class ShrubberyCreationForm : public Form {
public:
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(ShrubberyCreationForm const &shrubberycreationform);
    ShrubberyCreationForm   &operator=(ShrubberyCreationForm const &ref);
    ShrubberyCreationForm(std::string const &target);

private:
    std::string             _target;
    virtual void            execute(Bureaucrat const & executor) const;
};


#endif //C_SHRUBBERYCREATIONFORM_HPP
