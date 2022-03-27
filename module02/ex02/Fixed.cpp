/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 11:20:59 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/11 11:20:59 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex02/Fixed.hpp"

Fixed::Fixed() {
    _fix_point = 0;
}

Fixed::~Fixed() {
}

Fixed::Fixed(int num_int) {
    _fix_point = num_int << _bits;
}

Fixed::Fixed(float num_float) {
    _fix_point = roundf(num_float * (1 << _bits));
}

Fixed::Fixed(const Fixed &fixed) {
    *this = fixed;
}

Fixed const &Fixed::operator=(const Fixed &ref) {
    _fix_point = ref.getRawBits();
    return *this;
}

int Fixed::getRawBits() const {
    return _fix_point;
}

void Fixed::setRawBits(int const raw) {
    _fix_point = raw;
}

float Fixed::toFloat() const {
    return (float)_fix_point / (1 << _bits);
}

int Fixed::toInt() const {
    return _fix_point >> _bits;
}

std::ostream    &operator<<(std::ostream &out, Fixed const &ref)
{
    out << ref.toFloat();
    return out;
}

bool    Fixed::operator>(Fixed const &ref) const
{
    return _fix_point > ref._fix_point;
}

bool    Fixed::operator<(Fixed const &ref) const
{
    return _fix_point < ref._fix_point;
}

bool    Fixed::operator>=(Fixed const &ref) const
{
    return _fix_point >= ref._fix_point;
}

bool    Fixed::operator<=(Fixed const &ref) const
{
    return _fix_point <= ref._fix_point;
}

bool    Fixed::operator==(Fixed const &ref) const
{
    return _fix_point == ref._fix_point;
}

bool    Fixed::operator!=(Fixed const &ref) const
{
    return _fix_point != ref._fix_point;
}

Fixed const Fixed::operator+(Fixed const &ref)
{
    Fixed   tmp(toFloat() + ref.toFloat());
    return tmp;
}

Fixed const Fixed::operator-(Fixed const &ref)
{
    Fixed   tmp(toFloat() - ref.toFloat());
    return tmp;
}

Fixed const Fixed::operator*(Fixed const &ref)
{
    Fixed   tmp(toFloat() * ref.toFloat());
    return tmp;
}

Fixed const Fixed::operator/(Fixed const &ref)
{
    Fixed   tmp(toFloat() / ref.toFloat());
    return tmp;
}

Fixed const Fixed::operator++()
{
    ++_fix_point;
    return *this;
}

Fixed const  Fixed::operator++(int)
{
    Fixed   tmp;

    tmp = *this;
    _fix_point++;
    return tmp;
}

Fixed const Fixed::operator--()
{
    --_fix_point;
    return *this;
}

Fixed const Fixed::operator--(int)
{
    Fixed   tmp;

    tmp = *this;
    _fix_point--;
    return tmp;
}

Fixed   Fixed::min(Fixed a, Fixed b) {
    if (a < b)
        return a;
    else
        return b;
}

Fixed   Fixed::max(Fixed a, Fixed b) {
    if (a > b)
        return a;
    else
        return b;
}
