/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:00:03 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/23 14:03:26 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data{
    int test;
    std::string test2;
};

uintptr_t serialize(Data* ptr){
    uintptr_t rst = reinterpret_cast<uintptr_t>(ptr);
    return (rst);
}

Data* deserialize(uintptr_t raw){
    Data *rst;
    rst = reinterpret_cast<Data *>(raw);
    return (rst);
}

int main()
{
    Data a;
    a.test = 42;
    a.test2 = "hello world";
    uintptr_t b = serialize(&a);
    Data *c = deserialize(b);

    std::cout << "origin address : " << &a << std::endl;
    std::cout << "serialize dec : " << b << std::endl;
    std::cout << "serialize hex : " << std::hex << b << std::dec << std::endl;
    std::cout << "deserialize : " << c->test << std::endl;
    return (0);
}