/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moua <ael-moua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 00:32:43 by ael-moua          #+#    #+#             */
/*   Updated: 2025/03/16 00:32:44 by ael-moua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i = 0, j = 0;
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (++i < ac)
    {
        j = 0;
        while (av[i][j] != '\0')
        {
            if (isalpha(av[i][j]))
                std::cout << (char)toupper(av[i][j++]);
            else
                std::cout << av[i][j++];
        }
    }
    std::cout << "\n";
    return (0);
}
