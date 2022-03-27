/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 15:42:59 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/11 15:42:59 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed   ax = a.getX();
    Fixed   ay = a.getY();
    Fixed   bx = b.getX();
    Fixed   by = b.getY();
    Fixed   cx = c.getX();
    Fixed   cy = c.getY();
    Fixed   pointx = point.getX();
    Fixed   pointy = point.getY();
    Fixed   sign1, sign2, sign3;

    sign1 = Fixed((ax - pointx) * (by - ay) - (bx - ax) * (ay - pointy));
    sign2 = Fixed((bx - pointx) * (cy - by) - (cx - bx) * (by - pointy));
    sign3 = Fixed((cx - pointx) * (ay - cy) - (ax - cx) * (cy - pointy));
    if (sign1 > 0 && sign2 > 0 && sign3 > 0)
        return (true);
    else if (sign1 < 0 && sign2 < 0 && sign3 < 0)
        return (true);
    return (false);
}