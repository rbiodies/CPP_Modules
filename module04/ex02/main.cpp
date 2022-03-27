/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 09:19:05 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/19 12:47:58 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal*   j = new Dog();
    const Animal*   i = new Cat();
    Animal          *animal[4];
//    Animal          test;

    i->makeSound();
    j->makeSound();

    delete i;//should not create a leak
    delete j;

    std::cout << "\n";

    for (int i = 0; i < 4; i++)
    {
        if (i < 2)
            animal[i] = new Dog();
        else
            animal[i] = new Cat();
    }

    for (int i = 0; i < 4; i++)
        delete animal[i];

    std::cout << "\n";

    Cat*    test = new Cat;
    Cat*    copy = new Cat(*test);  // deep copy

//    Cat*    copy = new Cat;
//    test = copy;

    std::cout << test->getBrain() << std::endl;
    std::cout << copy->getBrain() << std::endl;

    delete test;
    delete copy;

    std::cout << "\n";

    system("leaks animal");

    return 0;
}