/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hime <mel-hime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:47:22 by mel-hime          #+#    #+#             */
/*   Updated: 2025/01/08 12:44:53 by mel-hime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	randomChump("Zombie1");
	Zombie *z2 = newZombie("Zombie2");
	z2->announce();
	delete(z2);
	return 0;
}
