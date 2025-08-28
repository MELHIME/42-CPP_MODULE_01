/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hime <mel-hime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:04:36 by mel-hime          #+#    #+#             */
/*   Updated: 2025/01/08 12:34:26 by mel-hime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 10;
    Zombie *zlist = zombieHorde(N, "TCHITCHI");
    for(int i = 0; i < N; i++)
        zlist[i].announce();
    delete[] zlist;
}