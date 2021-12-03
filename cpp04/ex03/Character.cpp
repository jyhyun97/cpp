/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:41:00 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/03 16:41:01 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name){
    int i = 0;
    while (i < 4)
    {
        inventory[i] = 0;
        i++;
    }
    this->name = name;
};
Character::~Character(){
    int i = 0;
    while (i < 4)
    {
        if (inventory[i] != 0)
            delete inventory[i];
        i++;
    }
};
Character::Character(const Character &origin){
    *this = origin;
};
Character &Character::operator=(const Character &origin){
    int i = 0;
    if (this == &origin)
        return (*this);
    this->name = origin.getName();
    while (i < 4)
    {
        if (this->inventory[i] != 0)
        {
            delete inventory[i];
            this->inventory[i] = 0;
        }
        if (origin.inventory[i] != 0)
            this->inventory[i] = origin.inventory[i]->clone();
        i++;
    }
    return (*this);
};

std::string const &Character::getName() const
{
    return (this->name);
};
void Character::equip(AMateria *m){
    int i = 0;
    while (i < 4)
    {
        if (this->inventory[i] == 0)
        {
            this->inventory[i] = m;
            std::cout << m->getType() << " equiped " << this->getName() << "\'s inventory [" << i << "]" << std::endl;
            return ;
        }
        i++;
    }
    std::cout << this->getName() << "'s inventory is full!" << std::endl;
};
void Character::unequip(int idx){
    this->inventory[idx] = 0;
    std::cout << this->getName() << " unequiped inventory [" << idx << "]." << std::endl;
};
void Character::use(int idx, ICharacter& target){
    std::cout << this->getName() << " use "  << idx << " item " << this->inventory[idx]->getType() << " to " << target.getName() << std::endl;
    this->inventory[idx]->use(target);
};