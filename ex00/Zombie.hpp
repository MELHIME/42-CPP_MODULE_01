/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hime <mel-hime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:49:23 by mel-hime          #+#    #+#             */
/*   Updated: 2025/01/08 12:28:57 by mel-hime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie 
{
	private :
		std::string _name;

	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	announce(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif