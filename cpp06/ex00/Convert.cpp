/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:59:05 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/16 15:59:06 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(const Convert &origin){
    *this = origin;
};
Convert &Convert::operator=(const Convert &origin){
    if (this == &origin)
        return (*this);
    return (*this);
};
void Convert::convertChar(const char *numString){
    double rst = atof(numString);
    std::cout << "char : ";
    try{
        if (rst < 0 || rst > 255 || isinf(rst) || isnan(rst))
            throw ExceptCase("impossible");
        if (!isprint(rst))
            throw ExceptCase("Non displayable");
        std::cout << "'" << static_cast<char>(rst) << "'" << std::endl;
    }
    catch(const std::exception &e){
        std::cout << e.what() << std::endl;
    }
};
void Convert::convertInt(const char *numString){
    long rst = static_cast<long>(atof(numString));
    std::cout << "int : ";
    try{
        if (isinf(atof(numString)) || isnan(atof(numString)) || rst < -2147483648 || rst > 2147483647)
            throw ExceptCase("impossible");
        std::cout << static_cast<int>(rst) << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
};
void Convert::convertFloat(const char *numString){
    float rst = static_cast<float>(atof(numString));
    std::cout << "float : ";
    try{
        if (isinf(rst))
        {
            if (rst > 0)
                std::cout << "+";
            std::cout << rst << "f" << std::endl;
        }
        else
        {
            std::cout << rst;
            if (rst == atoi(numString))
                std::cout << ".0";
            std::cout << "f" << std::endl;
        }
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
};
void Convert::convertDouble(const char *numString){
    double rst = atof(numString);
    std::cout << "double : ";
    try{
        if (isinf(rst))
        {
            if (rst > 0)
                std::cout << "+";
            std::cout << rst << std::endl;
        }
        else
        {
            std::cout << rst;
            if (rst == atoi(numString))
                std::cout << ".0";
            std::cout << std::endl;
        }
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
};