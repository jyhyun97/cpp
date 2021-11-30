/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 21:34:23 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/11/29 21:34:24 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap A("wheatley");
    A.attack("ant");
    A.takeDamage(5);
    A.takeDamage(8);
    A.takeDamage(4);
    A.attack("ant");
    A.takeDamage(4);
    A.beRepaired(3);

    return (0);
}