/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hime <mel-hime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:30:55 by mel-hime          #+#    #+#             */
/*   Updated: 2025/01/08 15:55:22 by mel-hime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(): _type("default")
{
    std::cout << "default weapon constractor called" << std::endl;
}

Weapon::Weapon(std::string type)
{
    std::cout << "parametrized weapon constractor called" << std::endl;
    this->_type = type;
}

Weapon::~Weapon()
{
    std::cout << "default weapon  destractor called" << std::endl;
}

const std::string& Weapon::getType() const
{
    return(this->_type);
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}