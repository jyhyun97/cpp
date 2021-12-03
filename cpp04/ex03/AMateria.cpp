/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:40:38 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/03 16:40:39 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type){
    this->type = type;
};

AMateria::~AMateria(){};

AMateria::AMateria(const AMateria &origin){
    *this = origin;
};
AMateria &AMateria::operator=(const AMateria &origin){
    if (this == &origin)
        return (*this);
    this->type = origin.getType();
    return (*this);
};
std::string const &AMateria::getType() const{
    return (this->type);
};

void AMateria::use(ICharacter &target){
    std::cout << target.getName() << " use " << this->getType() << std::endl;
};