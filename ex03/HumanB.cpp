/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hime <mel-hime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:59:09 by mel-hime          #+#    #+#             */
/*   Updated: 2025/01/09 13:06:03 by mel-hime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
    _name = "unknown";
    _wp = NULL;
    std::cout << "default HumanB constractor called" << std::endl;
}

HumanB::HumanB(std::string name)
{
    _name = name;
    _wp = NULL;
    std::cout << "HumanB parametrized constractor called" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "default HumanB destractor called" << std::endl;
}

void HumanB::attack()
{
    if(this->_wp)
        std::cout << this->_name << " attacks with their " << this->_wp->getType() << std::endl;
    else
        std::cout << this->_name << " can't attack" << std::endl;
}

void HumanB::setWeapon(Weapon &wp)
{
    this->_wp = &wp;
}