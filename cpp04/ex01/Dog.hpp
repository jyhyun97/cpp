/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:01:29 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/16 17:16:28 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
    private :
        Brain *brain;
    public :
        Dog();
        ~Dog();
        Dog(const Dog &origin);
        Dog &operator=(const Dog &origin);
        void makeSound() const;
        Brain *getBrain();

};


#endif