/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:01:16 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/03 14:00:45 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat class constructor~~" << std::endl;
    type = "Cat";
    brain = new Brain;
};

Cat::~Cat()
{
    std::cout << "Cat class destructor~~" << std::endl;
    delete brain;
};

Cat::Cat(const Cat &origin)
{
    std::cout << "Cat class copy constructor~~" << std::endl;
    this->type = origin.type;
    this->brain = new Brain(*origin.brain);
};

Cat &Cat::operator=(const Cat &origin)
{
    std::cout << "Cat class assignment operator~~" << std::endl;
    if (this == &origin)
        return (*this);
    this->type = origin.type;
    if (this->brain != 0)
        delete this->brain;
    this->brain = new Brain(*origin.brain);
    return (*this);
};

void Cat::makeSound() const
{
    std::cout << "nyang nyang" << std::endl;
};