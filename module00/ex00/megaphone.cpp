/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:10:32 by                   #+#    #+#             */
/*   Updated: 2022/03/02 17:22:35 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    j = 0;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (i < argc)
        {
            j = 0;
            while (argv[i][j] != '\0')
            {
                if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
                    argv[i][j] -= 32;
                j++;
            }
            std::cout << argv[i];
            i++;
        }
        std::cout << std::endl;
    }
    return (0);
}