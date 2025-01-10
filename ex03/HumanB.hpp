/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hime <mel-hime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:07:12 by mel-hime          #+#    #+#             */
/*   Updated: 2025/01/09 13:06:17 by mel-hime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"


class HumanB
{
    private:
        std::string _name;
        Weapon      *_wp;
    public:
        HumanB();
        HumanB(std::string name);
        ~HumanB();
        void    attack();
        void    setWeapon(Weapon &wp);
};

#endif