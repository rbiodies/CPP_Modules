/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:12:29 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/22 14:12:29 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_CONVERT_HPP
#define C_CONVERT_HPP

#include <iostream> // std::
#include <cmath>    // isnan

class Convert {
public:
    Convert();
    ~Convert();
    Convert(Convert const &convert);
    Convert &operator=(Convert const &ref);
    Convert(std::string str);

private:
    double  _str;
    bool    _isImp;
    void    toType();
    void    toChar();
    void    toInt();
    void    toFloat();
    void    toDouble();
};


#endif //C_CONVERT_HPP
