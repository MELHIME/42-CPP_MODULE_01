/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hime <mel-hime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 15:54:47 by mel-hime          #+#    #+#             */
/*   Updated: 2025/01/10 15:06:33 by mel-hime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wp) : _wp(wp)
{
    _name = name;
    std::cout << "parametrized humanA constractor called" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "default HumanA destractor called" << std::endl;
}

void    HumanA::attack()
{
    std::cout << this->_name << " attacks with their " << this->_wp.getType() << std::endl;
}