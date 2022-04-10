/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 15:12:13 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/23 15:12:13 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base    * generate(void)
{
    // time(0) gives the time in seconds since the Unix epoch
    srand(time(0)); // Initialize random number generator
    int i = rand() % 3;

    if (i == 0)
        return new A;
    else if (i == 1)
        return new B;
    else
        return new C;
}

void    identify(Base* p)
{
    // приведение вниз: преобразует данные указателя и ссылочного типа суперкласса
    // в данные указателя и ссылочного типа подкласса
    A   *a = dynamic_cast<A*>(p);
    B   *b = dynamic_cast<B*>(p);
    C   *c = dynamic_cast<C*>(p);

    if (a)
        std::cout << "A" << std::endl;
    else if (b)
        std::cout << "B" << std::endl;
    else if (c)
        std::cout << "C" << std::endl;
    else
        std::cout << "Error" << std::endl;
}

void    identify(Base& p)
{
    // Это ссылка на указатель на char
    if ((char *)&p == NULL)
        return ;
    try {
        A &a = dynamic_cast<A &>(p);
        (void) a;
        std::cout << "A" << std::endl;
    }
    // The bad_cast exception is thrown by the dynamic_cast operator
    // as the result of a failed cast to a reference type
    catch (std::bad_cast) {}
    try {
        B &b = dynamic_cast<B &>(p);
        (void) b;
        std::cout << "B" << std::endl;
    }
    catch (std::bad_cast) {}
    try {
        C &c = dynamic_cast<C &>(p);
        (void) c;
        std::cout << "C" << std::endl;
    }
    catch (std::bad_cast) {}
}

int main(void)
{
    Base    *p = generate();

    identify(p);
    identify(*p);
    return 0;
}