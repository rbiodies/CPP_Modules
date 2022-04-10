/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:07:11 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/25 14:07:11 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

// push_back() method is one method in C++ which is part of the standard library supporting vector
void    ft_vector()
{
    std::vector<int>    vector;
    int                 res;

    for (int i = 0; i < 100; i++)
        vector.push_back(i);
    res = easyfind(vector, 0);
    if (res == 0)
        std::cout << "Vector:\tElement is found" << std::endl;
    else
        std::cout << "Vector:\tElement not found" << std::endl;
}

void    ft_list()
{
    std::list<int>      list;
    int                 res;

    for (int i = 0; i < 100; i++)
        list.push_back(i);
    res = easyfind(list, -10);
    if (res == 0)
        std::cout << "List:\tElement is found" << std::endl;
    else
        std::cout << "List:\tElement not found" << std::endl;
}

void    ft_deque()
{
    std::deque<int>     deque;
    int                 res;

    for (int i = 0; i < 100; i++)
        deque.push_front(i);
    res = easyfind(deque, 99);
    if (res == 0)
        std::cout << "Deque:\tElement is found" << std::endl;
    else
        std::cout << "Deque:\tElement not found" << std::endl;
}

void    ft_array()
{
    std::array<int, 100>    array;
    int                     res;

    for (int i = 0; i < 100; i++)
       array[i] = i;
    res = easyfind(array, 100);
    if (res == 0)
        std::cout << "Array:\tElement is found" << std::endl;
    else
        std::cout << "Array:\tElement not found" << std::endl;
}

// array        статический непрерывный массив
// vector       динамический непрерывный массив
// deque        двусторонняя очередь
// forward_list односвязный список
// list         двусвязный список
int main()
{
    ft_vector();
    ft_list();
    ft_deque();
    ft_array();
    return 0;
}
