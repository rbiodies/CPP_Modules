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

#include "iter.hpp"

int main( void ) {
    int     a[] = {1,2,3,4,5};
    char    b[] = {'a','b','c','d','e'};
    float   c[] = {1.1f,2.2f,3.3f,4.4f,5.5f};

    ::iter( a, 5, print );
    ::iter( b, 5, print );
    ::iter( c, 5, print );

    std::cout << "\n";

    ::iter( a, 5, increment );
    ::iter( b, 5, increment );
    ::iter( c, 5, increment );

    return 0;
}