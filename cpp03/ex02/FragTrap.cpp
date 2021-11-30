/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 21:38:42 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/11/29 21:38:42 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap " << "default" << " appeared." << std::endl;
    this->Name = "default";
    this->Hitpoints = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
};

FragTrap::FragTrap(std::string nameOrigin)
{
    std::cout << "ScavTrap " << nameOrigin << " appeared." << std::endl;
    this->Name = nameOrigin;
    this->Hitpoints = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
};
FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << Name << " is dead." << std::endl;
};

FragTrap::FragTrap(const FragTrap &origin)
{
    std::cout << "FragTrap " << origin.Name << " copied." << std::endl;
    *this = origin;
};

FragTrap &FragTrap::operator=(const FragTrap &origin)
{
    std::cout << "FragTrap " << origin.Name << " assigned." << std::endl;
    if (this == &origin)
        return (*this);
    this->Name = origin.Name;
    this->Hitpoints = origin.Hitpoints;
    this->Energy_points = origin.Energy_points;
    this->Attack_damage = origin.Attack_damage;
    return (*this);
};

void FragTrap::attack(std::string const &target)
{
    if (Hitpoints <= 0)
    {
        std::cout << Name << " Can't attack now. it seems to be broken.." << std::endl;
        return;
    }
    std::cout << "FragTrap " << Name << " attacks " << target << " causing " << Attack_damage << " points of damage!" << std::endl;
};

void FragTrap::takeDamage(unsigned int amount)
{
    if (Hitpoints <= 0)
    {
        std::cout << "Stop it! " << Name << "'s HP is already zero!" << std::endl;
        return;
    }
    Hitpoints -= amount;
    if (Hitpoints <= 0)
        Hitpoints = 0;
    std::cout << "FragTrap " << Name << " get " << amount << " damage and " << Hitpoints << " HP left." << std::endl;
};

void FragTrap::beRepaired(unsigned int amount)
{
    Hitpoints += amount;
    std::cout << "FragTrap " << Name << " repaired " << amount << " point and " << Hitpoints << " HP left." << std::endl;
};

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << Name << " request everyone for a high fives." << std::endl;
};