/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:02:20 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/24 10:02:20 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_WHATEVER_HPP
#define C_WHATEVER_HPP

#include <iostream>

//a = 3, b = 2
//min(a, b) = 2
//max(a, b) = 3
//c = chaine2, d = chaine1
//min(c, d) = chaine1
//max(c, d) = chaine2

template<typename T>
void    swap(T& a, T& b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template<typename T>
T   min(T const& a, T const& b)
{
    if (a < b)
        return a;
    else
        return b;
}

template<typename T>
T   max(T const& a, T const& b)
{
    if (a > b)
        return a;
    else
        return b;
}

#endif //C_WHATEVER_HPP
