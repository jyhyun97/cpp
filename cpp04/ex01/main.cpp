/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:01:32 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/03 16:36:45 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

//애니멀 배열을 만들고
//절반은 Dog, 절반은 Cat으로 채우고,
//모든 애니멀 삭제하기
//Cat, Dog의 사본이 깊은 복사를 하고 있다는 것을 보여주기(복사해오고 기존 오리지널은 삭제, 그래도 잘 동작하는 것을 보여주면 됨)

int main()
{
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    delete j; // should not create a leak
    delete i;

    Animal *arr[4];
    Dog *a = new Dog();
    Cat *b = new Cat();
    int idx = 0;
    while (idx < 4)
    {
        if (idx < 2)
            arr[idx] = new Dog(*a);
        else
            arr[idx] = new Cat(*b);
        idx++;
    }

    delete a;
    delete b;
    
    arr[0]->makeSound();
    arr[2]->makeSound();

    idx = 0;
    while (idx < 4)
    {
        delete arr[idx];
        idx++;
    }
    return (0);
}