/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:08:01 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/25 14:08:01 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {
    _N = 0;
}

Span::~Span() {

}

Span::Span(unsigned int N) {
    _N = N;
}

Span::Span(const Span &span) {
    *this = span;
}

Span    &Span::operator=(const Span &ref) {
    if (this == &ref)
        return *this;
    _N = ref._N;
    return *this;
}

void    Span::addNumber(unsigned int n) {
    if (_vector.size() == _N) throw SizeException();
    _vector.push_back(n);
}

// Use sort algorithm from STL
unsigned int    Span::shortestSpan() {
    if (_vector.size() == 0 || _vector.size() == 1) throw RangeException();
    std::sort(_vector.begin(), _vector.end());
    int min = _vector[1] - _vector[0];
    for (std::vector<int>::iterator iter = _vector.begin(); iter != _vector.end() - 1; iter++) {
        min = std::min(min, *(iter + 1) - *iter);
    }
    return min;
}

// Using min/max_element from STL
unsigned int    Span::longestSpan() {
    if (_vector.size() == 0 || _vector.size() == 1) throw RangeException();
    std::vector<int>::iterator min = std::min_element(_vector.begin(), _vector.end());
    std::vector<int>::iterator max = std::max_element(_vector.begin(), _vector.end());
    return (*max - *min);
}

const char *Span::SizeException::what() const throw() {
    return "Vector is full";
}

const char *Span::RangeException::what() const throw() {
    return "Vector has too few elements";
}