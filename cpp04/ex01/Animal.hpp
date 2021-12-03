/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:01:14 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/03 14:22:21 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal{
    protected :
        std::string type;
    public :
    Animal();
    virtual ~Animal();
    Animal(const Animal &origin);
    Animal &operator=(const Animal &origin);
    
    virtual void makeSound() const;
    std::string getType() const;
};

#endif