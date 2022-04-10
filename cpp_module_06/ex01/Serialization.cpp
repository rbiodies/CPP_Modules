/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:02:45 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/23 12:02:45 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Serialization::Serialization() {

}

Serialization::~Serialization() {

}

Serialization::Serialization(const Serialization &serialization) {
    *this = serialization;
}

Serialization   &Serialization::operator=(Serialization const &ref) {
    return *this;
}

// Сохранение структуры объекта в виде массива байтов называется сериализацией,
// а чтение содержимого из массива байтов и заполнение объекта называется десериализацией

// Эта функция возвращает адрес кучи последовательности байтов представляющей сериализованный фрагмент данных
// Сериализованные данные представляют собой конкатенацию
// [случайного массива из 8 буквенно-цифровых символов, случайного целого числа,
// второго случайного массива из 8 буквенно-цифровых символов]
uintptr_t Serialization::serialize(Data *ptr) {
    // Cast that can be converted between arbitrary pointers
    return  reinterpret_cast<uintptr_t>(ptr);
}

Data*   Serialization::deserialize(uintptr_t raw) {
    return reinterpret_cast<Data*>(raw);
}

std::ostream &operator<<(std::ostream &out, Data const &data) {
    out << "int: " << data._i << std::endl;
    out << "char: " << data._c << std::endl;
    out << "float: " << data._f << "f" << std::endl;
    out << "double: " << data._d << std::endl;
    return out;
}