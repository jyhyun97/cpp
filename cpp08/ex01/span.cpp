/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:02:31 by jeonhyun          #+#    #+#             */
/*   Updated: 2022/01/03 17:02:32 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int N)
{
    max_size = N;
}
void Span::addNumber(int num)
{
    if (container.size() >= max_size)
        throw error();
    container.push_back(num);
}
long int Span::shortestSpan()
{
    if (container.size() <= 1)
        throw error();
    std::sort(container.begin(), container.end());
    std::vector<int>::iterator it = container.begin();
    long int rst = LONG_MAX;
    while (it != container.end() - 1)
    {
        long tmp;
        if (*it > *(it + 1))
            tmp = static_cast<long>(*it) - static_cast<long>(*(it + 1));
        else
            tmp = static_cast<long>(*(it + 1)) - static_cast<long>(*it);
        if (tmp < rst)
            rst = tmp;
        ++it;
    }
    return (rst);
};
long Span::longestSpan()
{
    if (container.size() <= 1)
        throw error();
    std::sort(container.begin(), container.end());
    long rst;
    rst = static_cast<long>(container.back()) - static_cast<long>(container.front());
    return (rst);
};