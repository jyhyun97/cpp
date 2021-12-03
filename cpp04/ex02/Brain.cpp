/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:40:29 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/03 16:40:29 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    int i = 0;
    while (i < 100)
    {
        this->idea[i] = "";
        i++;
    }
};

Brain::~Brain(){

};

Brain::Brain(const Brain &origin){
    *this = origin;
};

Brain &Brain::operator=(const Brain &origin){
    if (this == &origin)
        return (*this);
    int i = 0;
    while (i < 100)
    {
        this->idea[i] = origin.idea[i];
        i++;
    }
    return (*this);
};
