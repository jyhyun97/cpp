/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:01:27 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/03 15:07:21 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog class constructor~~" << std::endl;
    type = "Dog";
    brain = new Brain;
};

Dog::~Dog()
{
    std::cout << "Dog class destructor~~" << std::endl;
    delete brain;
};

Dog::Dog(const Dog &origin)
{
    std::cout << "Dog class copy constructor~~" << std::endl;
    this->type = origin.type;
    this->brain = new Brain(*origin.brain);
};

Dog &Dog::operator=(const Dog &origin)
{
    std::cout << "Dog class assignment operator~~" << std::endl;
    if (this == &origin)
        return (*this);
    this->type = origin.type;
    if (this->brain != 0)
        delete this->brain;
    this->brain = new Brain(*origin.brain);
    return (*this);
};

void Dog::makeSound() const
{
    std::cout << "mung mung" << std::endl;
};