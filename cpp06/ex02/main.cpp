/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:00:45 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/16 16:00:50 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void){
    Base *rtn;
    switch (time(0) % 3)
    {
    case 0:
        rtn = new A();
        break;
    case 1:
        rtn = new B();
        break;
    case 2:
        rtn = new C();
        break;
    }
    return (rtn);
}

void identify(Base* p){
    A *testA = dynamic_cast<A *>(p);
    B *testB = dynamic_cast<B *>(p);
    C *testC = dynamic_cast<C *>(p); 
    if (testA != 0)
        std::cout << "A" << std::endl;
    else if (testB != 0)
        std::cout << "B" << std::endl;
    else if (testC != 0)
        std::cout << "C" << std::endl;
}

void identify(Base& p){
    Base *q = &p;
    identify(q);
}

int main()
{
    Base *test = generate();
    identify(test);
    identify(*test);
    delete test;
    return (0);
}
