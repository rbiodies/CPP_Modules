/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:41:20 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/24 10:41:20 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_ITER_HPP
#define C_ITER_HPP

#include <iostream>

template<typename T>
void increment(T element)
{
    element++;
    std::cout << element << std::endl;
}

template<typename T>
void    print(T element)
{
    std::cout << element << std::endl;
}

template<typename T>
// function can point to any function that matches this type
void    iter(T *array, int length, void (*function)(T))
{
    for (int i = 0; i < length; i++)
        function(array[i]);
}

#endif //C_ITER_HPP
