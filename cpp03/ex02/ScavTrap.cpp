/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 21:38:56 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/11/29 21:38:56 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap " << "default" << " appeared." << std::endl;
    this->Name = "default";
    this->Hitpoints = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
};

ScavTrap::ScavTrap(std::string nameOrigin)
{
    std::cout << "ScavTrap " << nameOrigin << " appeared." << std::endl;
    this->Name = nameOrigin;
    this->Hitpoints = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
};

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << Name << " is dead." << std::endl;
};

ScavTrap::ScavTrap(const ScavTrap &origin)
{
    std::cout << "ScavTrap " << origin.Name << " copied." << std::endl;
    *this = origin;
};

ScavTrap &ScavTrap::operator=(const ScavTrap &origin)
{
    std::cout << "ScavTrap " << origin.Name << " assigned." << std::endl;
    if (this == &origin)
        return (*this);
    this->Name = origin.Name;
    this->Hitpoints = origin.Hitpoints;
    this->Energy_points = origin.Energy_points;
    this->Attack_damage = origin.Attack_damage;
    return (*this);
};

void ScavTrap::attack(std::string const &target)
{
    if (Hitpoints <= 0)
    {
        std::cout << Name << " Can't attack now. it seems to be broken.." << std::endl;
        return;
    }
    std::cout << "ScavTrap " << Name << " attacks " << target << " causing " << Attack_damage << " points of damage!" << std::endl;
};

void ScavTrap::takeDamage(unsigned int amount)
{
    if (Hitpoints <= 0)
    {
        std::cout << "Stop it! " << Name << "'s HP is already zero!" << std::endl;
        return;
    }
    Hitpoints -= amount;
    if (Hitpoints <= 0)
        Hitpoints = 0;
    std::cout << "ScavTrap " << Name << " get " << amount << " damage and " << Hitpoints << " HP left." << std::endl;
};

void ScavTrap::beRepaired(unsigned int amount)
{
    Hitpoints += amount;
    std::cout << "ScavTrap " << Name << " repaired " << amount << " point and " << Hitpoints << " HP left." << std::endl;
};

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << Name << " have enterred in Gate keeper mode." << std::endl;
};