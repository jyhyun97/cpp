/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:02:25 by jeonhyun          #+#    #+#             */
/*   Updated: 2022/01/03 17:02:26 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "span.hpp"

int main()
{
    srand(time(NULL));
    try
    {
        Span sp = Span(10000);
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < 100; j++)
            {
                sp.addNumber(rand());
            }
        }
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}