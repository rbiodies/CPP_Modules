/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 11:20:44 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/11 11:20:44 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {
    Point   a(5.12f, 4.16f);
    Point   b(0, 0);
    Point   c(1.18f, -6.49f);
    Point   currentPoint(4.18f, 3.02f);
    bool    res;

    res = bsp(a, b, c, currentPoint);
    std::cout << res << std::endl;
    return 0;
}
