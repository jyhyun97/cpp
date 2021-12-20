/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:01:32 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/20 11:55:18 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

//깊은 복사를 한다는 걸 보여주기

int main()
{
    Animal *arr[4];
    Dog *a = new Dog();
    Cat *b = new Cat();
    
    a->getBrain()->setIdea(0, "test1");
    b->getBrain()->setIdea(0, "test2");
    std::cout << a->getBrain()->GetIdea(0) << std::endl;
    std::cout << b->getBrain()->GetIdea(0) << std::endl;
    
    int idx = 0;
    while (idx < 4)
    {
        if (idx < 2)
            arr[idx] = new Dog(*a);
        else
            arr[idx] = new Cat(*b);
        idx++;
    }

    Dog *copydog(static_cast<Dog *>(arr[0]));
    Cat *copycat(static_cast<Cat *>(arr[2]));
    
    delete a;
    delete b;

    std::cout << copydog->getBrain()->GetIdea(0) << std::endl;
    std::cout << copycat->getBrain()->GetIdea(0) << std::endl;

    idx = 0;
    while (idx < 4)
    {
        delete arr[idx];
        idx++;
    }

    std::cout << copydog->getBrain()->GetIdea(0) << std::endl;
    std::cout << copycat->getBrain()->GetIdea(0) << std::endl;

    return (0);
}