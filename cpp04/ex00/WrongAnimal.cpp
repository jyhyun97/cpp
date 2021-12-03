/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:01:10 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/03 16:30:05 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal class constructor~~" << std::endl;
    type = "WrongAnimal";
};
WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal class destructor~~" << std::endl;
};

WrongAnimal::WrongAnimal(const WrongAnimal &origin){
    *this = origin;
};
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &origin){
    if (this == &origin)
        return (*this);
    this->type = origin.type;
    return (*this);
};

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal sound" << std::endl;
};

std::string WrongAnimal::getType() const {
    return (this->type);
};