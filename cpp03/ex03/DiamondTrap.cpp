/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 22:18:00 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/11/30 11:00:31 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap "
              << "default"
              << " appeared." << std::endl;
    this->ClapTrap::Name = "default_clap_name";
    this->Name = "default";
    this->Hitpoints = this->FragTrap::Hitpoints;
    this->Energy_points = this->ScavTrap::Energy_points;
    this->Attack_damage = this->FragTrap::Attack_damage;
};

DiamondTrap::DiamondTrap(std::string nameOrigin) : ClapTrap(), ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap " << nameOrigin << " appeared." << std::endl;
    this->ClapTrap::Name = nameOrigin + "_clap_name";
    this->Name = nameOrigin;
    this->Hitpoints = this->FragTrap::Hitpoints;
    this->Energy_points = this->ScavTrap::Energy_points;
    this->Attack_damage = this->FragTrap::Attack_damage;
};

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->Name << " is dead." << std::endl;
};

DiamondTrap::DiamondTrap(const DiamondTrap &origin)
{
    std::cout << "DiamondTrap " << origin.Name << " copied." << std::endl;
    *this = origin;
};

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &origin)
{
    std::cout << "DiamondTrap " << origin.Name << " assigned." << std::endl;
    if (this == &origin)
        return (*this);
    this->Name = origin.Name;
    this->ClapTrap::Name = origin.ClapTrap::Name;
    this->Hitpoints = origin.Hitpoints;
    this->Energy_points = origin.Energy_points;
    this->Attack_damage = origin.Attack_damage;
    return (*this);
};

void DiamondTrap::attack(std::string const &target)
{
    this->ScavTrap::attack(target);
};

void DiamondTrap::takeDamage(unsigned int amount)
{
    this->FragTrap::takeDamage(amount);
};

void DiamondTrap::beRepaired(unsigned int amount)
{
    this->FragTrap::beRepaired(amount);
};

void DiamondTrap::whoAmI()
{
    std::cout << "I'm the " << this->Name << " and " << this->ClapTrap::Name << std::endl;
};