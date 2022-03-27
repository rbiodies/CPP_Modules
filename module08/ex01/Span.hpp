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

#ifndef C_SPAN_HPP
#define C_SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span {
public:
    Span();
    ~Span();
    Span(Span const &span);
    Span            &operator=(Span const &ref);
    Span(unsigned int N);
    void            addNumber(unsigned int n);
    unsigned int    shortestSpan();
    unsigned int    longestSpan();

private:
    unsigned int        _N;
    std::vector<int>    _vector;
class SizeException : public std::exception {
        const char *what() const throw();
    };
class RangeException : public std::exception {
        const char *what() const throw();
    };
};


#endif //C_SPAN_HPP
