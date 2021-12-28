/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 11:23:53 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/28 11:33:11 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void iter(T *address, int length, void (*function)(T))
{
    int i = 0;
    while (i < length)
    {
        function(address[i]);
        i++;
    }
}

template <typename T>
void iter(T *address, int length, void (*function)(T&))
{
    int i = 0;
    while (i < length)
    {
        function(address[i]);
        i++;
    }
}

template <typename T>
void iter(T *address, int length, void (*function)(const T&))
{
    int i = 0;
    while (i < length)
    {
        function(address[i]);
        i++;
    }
}

#endif