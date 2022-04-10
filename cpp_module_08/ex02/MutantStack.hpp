/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 09:29:30 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/26 09:29:30 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_MUTANTSTACK_HPP
#define C_MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

// stack    адаптирует контейнер для предоставления стека (структура данных LIFO)
template<class T>
class MutantStack : public std::stack<T> {
public:
    MutantStack() {}
    ~MutantStack() {}
    MutantStack(MutantStack const &mutantstack) { *this = mutantstack; }
    MutantStack &operator=(MutantStack const &ref) { return *this; }

    // typedef определяет новый тип для использования в вашем коде, как сокращение
    // typename здесь сообщает компилятору, что iterator это тип
    // это ::область действия типа
    // Это вроде как "есть в", так iterator "есть в" container_type или также может рассматриваться как содержит
    // Member-тип container_type эквивалентен типу нижележащего контейнера
    // (т.к. std::stack - это адаптер под интерфейс стека, а не реальный контейнер,
    // реальный контейнер для хранения вы выбираете вторым параметром шаблона, по-умолчанию это std::deque
    // Вот у std::deque<T> итератор действительно есть
    typedef typename std::stack<T>::container_type::iterator                iterator;
    typedef typename std::stack<T>::container_type::const_iterator          const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator        reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator  const_reverse_iterator;

    iterator                begin() { return this->c.begin(); }
    iterator                end() { return this->c.end(); }
    const_iterator          cbegin() { return this->c.cbegin(); }
    const_iterator          cend() { return this->c.cend(); }
    reverse_iterator        rbegin() { return this->c.rbegin(); }
    reverse_iterator        rend() { return this->c.rend(); }
    const_reverse_iterator  crbegin() { return this->c.crbegin(); }
    const_reverse_iterator  crend() { return this->c.crend(); }
};

// c	-	контейнер с методом begin
// rbegin() указывает на end() и rend() указывает на begin()

#endif //C_MUTANTSTACK_HPP
