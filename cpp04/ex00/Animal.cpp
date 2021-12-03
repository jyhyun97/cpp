/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:01:10 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/11/30 17:01:12 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal class constructor~~" << std::endl;
    type = "animal";
};
Animal::~Animal(){
    std::cout << "Animal class destructor~~" << std::endl;
};

Animal::Animal(const Animal &origin){
    *this = origin;
};
Animal &Animal::operator=(const Animal &origin){
    if (this == &origin)
        return (*this);
    this->type = origin.type;
    return (*this);
};

void Animal::makeSound() const {
    std::cout << "animal sound" << std::endl;
};

std::string Animal::getType() const {
    return (this->type);
};