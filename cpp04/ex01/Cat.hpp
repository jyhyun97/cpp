/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:01:20 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/16 17:18:03 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
    private :
        Brain *brain;
    public :
        Cat();
        ~Cat();
        Cat(const Cat &origin);
        Cat &operator=(const Cat &origin);
        Brain *getBrain();
        
        void makeSound() const;
};

#endif