/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 21:39:22 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/11/29 21:57:25 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap test("R2D2");
    test.beRepaired(10);
    test.attack("bee");
    test.takeDamage(50);
    test.highFivesGuys();
    test.whoAmI();
    test.guardGate();
    return (0);
}