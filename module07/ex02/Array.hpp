/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 12:12:39 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/24 12:12:39 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_ARRAY_HPP
#define C_ARRAY_HPP

#include <iostream>

template <class T>
class Array {
public:
    Array() {
        _size = 0;
        _array = new T;
    }

    ~Array() {}

    Array(unsigned int n) {
        _size = n;
        _array = new T[_size];
    }

    Array(Array const &array) {
        _size = array._size;
        _array = new T[_size];
        for (int i = 0; i < _size; i++)
            _array = array._array;
    }

    Array   &operator=(Array const &ref) {
        _size = ref._size;
        _array = new T[_size];
        for (int i = 0; i < _size; i++)
            _array = ref._array;
        return *this;
    }

    T   &operator[](unsigned int i) const {
        if (i >= _size) throw std::exception();
        return _array[i];
    }

    unsigned int size() const {
        return _size;
    }

private:
    T               *_array;
    unsigned int    _size;
};

#endif //C_ARRAY_HPP
