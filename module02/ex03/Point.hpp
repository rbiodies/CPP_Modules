/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 15:42:47 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/11 15:42:47 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_POINT_HPP
#define C_POINT_HPP

#include "Fixed.hpp"

class Point {
private:
    Fixed const _x;
    Fixed const _y;

public:
    Point();
    Point(float const x, float const y);
    Point(Fixed const x, Fixed const y);
    Point(Point const &point);
    Point const &operator = (Point const &ref);
    ~Point();
    Fixed       getX( void ) const;
    Fixed       getY( void ) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif //C_POINT_HPP
