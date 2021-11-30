/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 21:34:57 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/11/29 21:34:58 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap " << "default" << " appeared." << std::endl;
    this->Name = "default";
    this->Hitpoints = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
};

ClapTrap::ClapTrap(std::string nameOrigin)
{
    std::cout << "ClapTrap " << nameOrigin << " appeared." << std::endl;
    this->Name = nameOrigin;
    this->Hitpoints = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
};
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << Name << " is dead." << std::endl;
};
ClapTrap::ClapTrap(const ClapTrap &origin)
{
    std::cout << "ClapTrap " << origin.Name << " copied." << std::endl;
    *this = origin;
};
ClapTrap &ClapTrap::operator=(const ClapTrap &origin)
{
    std::cout << "ClapTrap " << origin.Name << " assigned." << std::endl;
    if (this == &origin)
        return (*this);
    this->Name = origin.Name;
    this->Hitpoints = origin.Hitpoints;
    this->Energy_points = origin.Energy_points;
    this->Attack_damage = origin.Attack_damage;
    return (*this);
};

void ClapTrap::attack(std::string const &target)
{
    if (Hitpoints <= 0)
    {
        std::cout << Name << " Can't attack now. it seems to be broken.." << std::endl;
        return;
    }
    std::cout << "ClapTrap " << Name << " attacks " << target << " causing " << Attack_damage << " points of damage!" << std::endl;
};
void ClapTrap::takeDamage(unsigned int amount)
{
    if (Hitpoints <= 0)
    {
        std::cout << "Stop it! " << Name << "'s HP is already zero!" << std::endl;
        return;
    }
    Hitpoints -= amount;
    if (Hitpoints <= 0)
        Hitpoints = 0;
    std::cout << "ClapTrap " << Name << " get " << amount << " damage and " << Hitpoints << " HP left." << std::endl;
};
void ClapTrap::beRepaired(unsigned int amount)
{
    Hitpoints += amount;
    std::cout << "ClapTrap " << Name << " repaired " << amount << " point and " << Hitpoints << " HP left." << std::endl;
};