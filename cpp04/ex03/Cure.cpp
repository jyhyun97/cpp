/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:41:10 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/07 16:50:47 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){};
Cure::~Cure(){};
Cure::Cure(const Cure &origin) : AMateria(origin){};
Cure &Cure::operator=(const Cure &origin)
{
    if (this == &origin)
        return (*this);
    this->type = origin.getType();
    return (*this);
};
AMateria *Cure::clone() const
{
    Cure *rtn = new Cure(*this);
    return (rtn);
};
void Cure::use(ICharacter &target){
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
};