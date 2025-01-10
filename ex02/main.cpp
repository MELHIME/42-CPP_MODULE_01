/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hime <mel-hime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:19:45 by mel-hime          #+#    #+#             */
/*   Updated: 2025/01/08 12:44:19 by mel-hime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
 
    std::cout << "The memory address of str : " << &str << std::endl;
    std::cout << "The memory address held by stringPTR : " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF : " << &stringREF << std::endl;
    std::cout << "The value of the string : " << str << std::endl;
    std::cout << "The value of the stringPTR : " << *stringPTR << std::endl;
    std::cout << "The value of the stringREF: " << stringREF << std::endl;

    return(0);
}