/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hime <mel-hime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:44:48 by mel-hime          #+#    #+#             */
/*   Updated: 2025/01/09 13:23:36 by mel-hime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
    private:
        void        debug(void);
        void        info(void);
        void        warning(void);
        void        error(void);
        std::string _levels[4];
    public:
        Harl();
        ~Harl();
        void    complain(std::string level);
        int     getindex(std::string level);
};
#endif