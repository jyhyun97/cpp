/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 21:35:07 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/11/29 21:35:14 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected :
        std::string Name;
        int         Hitpoints;
        int         Energy_points;
        int         Attack_damage;
    public :
        ClapTrap();
        ClapTrap(std::string nameOrigin);
        ~ClapTrap();
        ClapTrap(const ClapTrap &origin);
        ClapTrap &operator=(const ClapTrap &origin);

        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif