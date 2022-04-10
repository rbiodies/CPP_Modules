/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:02:05 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/23 12:02:05 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main(void)
{
    Serialization   serialization;
    Data            *data = new Data(42, '*', 42.05f, 42.5);
    uintptr_t       raw = serialization.serialize(data);
    Data            *other = serialization.deserialize(raw);

    // Check if the original address value and the return value of deserialize are the same
    std::cout << "data address:  " << data << std::endl;
    std::cout << "other address: " << other << std::endl;
    std::cout << "raw   address: " << &raw << std::endl;
    std::cout << "\n";
    std::cout << "data value:\n" << *data << std::endl;
    std::cout << "other value:\n" << *other << std::endl;
    std::cout << "raw value: " << raw << std::endl;

    return 0;
}