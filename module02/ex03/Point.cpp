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

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {
}

Point::Point(float const float_x, float const float_y) : _x(float_x), _y(float_y) {
}

Point::Point(Point const &point) : _x(point._x), _y(point._y) {
}

Point::Point(Fixed const fixed_x, Fixed const fixed_y) : _x(fixed_x), _y(fixed_y) {
}

Fixed   Point::getX() const {
    return _x;
}

Fixed   Point::getY() const {
    return _y;
}

Point::~Point() {

}