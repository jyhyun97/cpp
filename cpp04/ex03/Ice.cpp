/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:41:15 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/03 16:41:15 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {};
Ice::~Ice(){};
Ice::Ice(const Ice &origin) : AMateria(origin) {};
Ice &Ice::operator=(const Ice &origin){
    if (this == &origin)
        return (*this);
    this->type = origin.getType();
    return (*this);
};
AMateria *Ice::clone() const
{
    Ice *rtn = new Ice(*this);
    return (rtn);
};
void Ice::use(ICharacter &target){
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
};