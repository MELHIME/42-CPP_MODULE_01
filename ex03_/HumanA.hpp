/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hime <mel-hime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 15:27:10 by mel-hime          #+#    #+#             */
/*   Updated: 2025/01/08 15:51:50 by mel-hime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
    private:
        std::string _name;
        Weapon &_wp;
    public:
        HumanA(std::string name, Weapon &wp);
        ~HumanA();
        void    attack();
};
#endif