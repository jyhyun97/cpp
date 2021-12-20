/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:01:16 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/16 17:19:28 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat class constructor" << std::endl;
    type = "Cat";
};

Cat::~Cat()
{
    std::cout << "Cat class destructor" << std::endl;
};

Cat::Cat(const Cat &origin)
{
    *this = origin;
};

Cat &Cat::operator=(const Cat &origin)
{
    if (this == &origin)
        return (*this);
    this->type = origin.type;
    return (*this);
};

void Cat::makeSound() const
{
    std::cout << "nyang nyang" << std::endl;
};