/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 11:43:42 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/20 11:43:43 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    private :
        std::string idea[100];
    public :
        Brain();
        ~Brain();
        Brain(const Brain &origin);
        Brain &operator=(const Brain &origin);
        void setIdea(int idx, std::string str);
        std::string GetIdea(int idx);
};

#endif