/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 11:43:39 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/20 11:43:41 by jeonhyun         ###   ########.fr       */
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

void Brain::setIdea(int idx, std::string str){
    this->idea[idx] = str;
};

std::string Brain::GetIdea(int idx){
    return (this->idea[idx]);
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
