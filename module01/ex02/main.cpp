/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 18:38:28 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/07 12:11:30 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string string = "HI THIS IS BRAIN";
    std::string &stringREF = string;
    std::string *stringPTR = &string;
//    std::string abc = "HELLO WORLD";

//    string = "HI I AM ZOMBIE";
//    stringREF = abc;
//    stringPTR = &abc;
    std::cout << "&string address:    " << &string << std::endl;
    std::cout << "&stringREF address: " << &stringREF << std::endl;
    std::cout << "stringPTR address:  " << stringPTR << std::endl;
    std::cout << "value string:       " << string << std::endl;
    std::cout << "value stringREF:    " << stringREF << std::endl;
    std::cout << "value *stringPTR:   " << *stringPTR << std::endl;
}
