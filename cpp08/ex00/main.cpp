/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:02:19 by jeonhyun          #+#    #+#             */
/*   Updated: 2022/01/03 17:02:20 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>
#include "easyfind.hpp"

int main()
{
    std::vector<int> test1;
    std::deque<int> test2;
    for (int i = 0; i < 5; i++)
    {
        test1.push_back(i);
        test2.push_back(i + 10);
    }
    try
    {
        std::cout << *(::easyfind(test1, 3)) << std::endl;
        std::cout << *(::easyfind(test2, 13)) << std::endl;
        std::cout << *(::easyfind(test2, 20)) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
   return (0);
}