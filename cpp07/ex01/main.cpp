/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 11:23:56 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/28 11:42:03 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void print_c(char a)
{
    std::cout << a << " ";
}

void print_i(const int &a)
{
    std::cout << a << " ";
}

int main()
{
    char test_c[5] = {'a', 'b', 'c', 'd', 'e'};
    int test_i[5] = {1, 2, 3, 4, 5};
    iter(test_c, 5, print_c);
    std::cout << std::endl;
    iter(test_i, 5, print_i);
    std::cout << std::endl;
    
    return (0);
}
