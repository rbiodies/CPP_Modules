/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbiodies <rbiodies@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:51:32 by rbiodies          #+#    #+#             */
/*   Updated: 2022/03/22 12:51:32 by rbiodies         #+#   #+#+#+#+.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char **argv)
{
    if (argc != 2) {
        std::cout << "You need to write 1 argument!" << std::endl;
        return 0;
    }

    Convert convert(argv[1]);

    return 0;
}