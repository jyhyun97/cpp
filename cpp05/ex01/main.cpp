/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:52:16 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/16 15:52:16 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat a("[A]", 5);
    Form b("[B]", 1, 1);

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    a.signForm(b);
    std::cout << b << std::endl;

    Form c("[C]", 10, 10);
    std::cout << c << std::endl;

    a.signForm(c);
    std::cout << c << std::endl;

    return (0);
}