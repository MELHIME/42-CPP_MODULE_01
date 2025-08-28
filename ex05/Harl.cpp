/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hime <mel-hime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 16:02:05 by mel-hime          #+#    #+#             */
/*   Updated: 2025/01/10 20:55:29 by mel-hime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    this->_levels[0] = "DEBUG";
    this->_levels[1] = "INFO";
    this->_levels[2] = "WARNING";
    this->_levels[3] = "ERROR";

    this->pfunctions[0] = &Harl::debug;
    this->pfunctions[1] = &Harl::info;
    this->pfunctions[2] = &Harl::warning;
    this->pfunctions[3] = &Harl::error;

}

Harl::~Harl()
{

}

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void) 
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." <<std::endl;
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want a manager to come and see me." << std::endl;
}

void    Harl::complain(std::string level)
{
    for(int i = 0; i < 4; i++)
    {
        if (this->_levels[i] == level)
        {
            (this->*pfunctions[i])();
            return;
        }
    }
    std::cout << level << " : invalid level" << std::endl;
}