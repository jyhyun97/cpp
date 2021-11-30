/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 21:35:22 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/11/29 21:35:23 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap B("C3PO");
    B.attack("ant");
    B.guardGate();
    B.beRepaired(10);
    B.takeDamage(10);
    B.takeDamage(50);
    B.attack("ant");
    return (0);
}