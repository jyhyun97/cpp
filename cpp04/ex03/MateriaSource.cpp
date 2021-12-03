/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:41:30 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/03 16:41:32 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    int i = 0;
    while (i < 4)
    {
        learn[i] = 0;
        i++;
    }
};
MateriaSource::~MateriaSource(){
    int i = 0;
    while (i < 4)
    {
        if (learn[i] != 0)
            delete learn[i];
        i++;
    }
};
MateriaSource::MateriaSource(const MateriaSource &origin){
    *this = origin;
};
MateriaSource &MateriaSource::operator=(const MateriaSource &origin){
    int i = 0;
    if (this == &origin)
        return (*this);
    while (i < 4)
    {
        if (this->learn[i] != 0)
        {
            delete learn[i];
            learn[i] = 0;
        }
        if (origin.learn[i] != 0)
            learn[i] = origin.learn[i]->clone();
        i++;
    }
    return (*this);
};

void MateriaSource::learnMateria(AMateria *origin){
    int i = 0;
    while (i < 4)
    {
        if (this->learn[i] == 0)
        {
            this->learn[i] = origin;
            return ;
        }
        i++;
    }
};
AMateria *MateriaSource::createMateria(std::string const &type){
    int i = 0;
    while (i < 4)
    {
        if (this->learn[i]->getType() == type)
            return (this->learn[i]->clone());
        i++;
    }
    return (0);
};