/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:01:32 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/20 11:52:32 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

//애니멀 클래스를 인스턴스화 하지 않도록 수정
//추상클래스는 순수가상함수를 포함하고 있으면 객체를 만들 수 없음(정의되지 않은 멤버함수가 있기 때문에)
//virtual 함수() = 0;

int main()
{
    Animal *test = new Dog();//Animal로 바꿨을 때 생성되지 않아야 함
    test->makeSound();
    delete test;
    return (0);
}