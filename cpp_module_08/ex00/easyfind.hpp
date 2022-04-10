/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:59:04 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/25 14:59:04 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_EASYFIND_HPP
#define C_EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <array>
#include <algorithm>

// An iterator is any object that, pointing to some element in a range of elements (such as an array or a container)
template<typename T>
int    easyfind(T &container, int value)
{
    // "find" is function defined in header <algorithm>
    typename    T::iterator element = std::find(container.begin(), container.end(), value);
    // The end() function returns an iterator that points to the next position after the last element
    if (element == container.end())
        return 1;
    return 0;
}

#endif //C_EASYFIND_HPP
