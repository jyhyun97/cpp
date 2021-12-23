/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:59:13 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/23 11:27:13 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Convert.hpp"

int main(int argc, char **argv)
{
    Convert converter;
    if (argc != 2) {
        std::cout << "please input one number" << std::endl;
    }
    else {
        converter.convertChar(argv[1]);
        converter.convertInt(argv[1]);
        converter.convertFloat(argv[1]);
        converter.convertDouble(argv[1]);
    }
    return (0);
};
