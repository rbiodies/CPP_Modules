/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:12:29 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/22 14:12:29 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert() {

}

Convert::Convert(std::string str) {
    try {
        _str = std::stod(str);
    }
    catch (...)
    {
        _isImp = true;
    }
    toType();
}

void Convert::toType() {
    toChar();
    toInt();
    toFloat();
    toDouble();
}

Convert::~Convert() {

}

Convert::Convert(const Convert &convert) {
    *this = convert;
}

Convert &Convert::operator=(const Convert &ref) {
    if (this == &ref)
        return *this;
    _str = ref._str;
    _isImp = ref._isImp;
    return *this;
}

void    Convert::toChar() {
    // Not-A-Number
    if (isnan(_str) == 1 || _isImp == 1)
        std::cout << "char: impossible" << std::endl;
    // Checks if ch is a printable character
    else if (isprint(_str) == 0)
        std::cout << "char: Non displayable" << std::endl;
    else
        // convert it explicitly
        std::cout << "char: " << static_cast<char>(_str) << std::endl;
}

void Convert::toInt() {
    if (isnan(_str) == 1 || _isImp == 1 || _str > INT_MAX || _str < INT_MIN)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(_str) << std::endl;
}

void Convert::toFloat() {
    // Sets the float field format flag for the str stream to fixed
    std::cout << std::fixed;
    // Sets the decimal precision to be used to format floating-point values on output operations
    std::cout.precision(1);
    if (_isImp == 1)
        std::cout << "float: impossible" << std::endl;
    else
        std::cout << "float: " << static_cast<float>(_str) << "f" << std::endl;
}

void Convert::toDouble() {
    if (_isImp == 1)
        std::cout << "double: impossible" << std::endl;
    else
        std::cout << "double: " << static_cast<double>(_str) << std::endl;
}