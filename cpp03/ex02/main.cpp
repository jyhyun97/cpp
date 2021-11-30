/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 21:38:48 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/11/29 21:38:49 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap A("codsworth");
    A.attack("raider");
    A.highFivesGuys();
    A.takeDamage(20);
    A.beRepaired(10);
    return (0);
}