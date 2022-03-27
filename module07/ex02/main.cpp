/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:01:57 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/24 10:01:57 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main( void ) {
    Array<int>      arr;
    int             size = 5;
    Array<int>      array(size);
    Array<float>    array2(size);

    try
    {
        std::cout << arr[0] << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    for (int i = 0; i < size; i++) {
        array[i] = i;
        std::cout << array[i] << " ";
    }

    std::cout << "\n";

    std::cout << array.size() << std::endl;


    for (int i = 0; i < size; i++) {
        array2[i] = i + 0.5;
        std::cout << array2[i] << " ";
    }

    std::cout << "\n";

    std::cout << array2.size() << std::endl;

    return 0;
}