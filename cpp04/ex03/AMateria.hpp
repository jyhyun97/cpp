/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:40:58 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/03 16:40:58 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string type;
    public :
        AMateria(std::string const &type);
        virtual ~AMateria();
        AMateria(const AMateria &origin);
        AMateria &operator=(const AMateria &origin);
        std::string const &getType() const;
        virtual AMateria *clone() const = 0;
        virtual void use(ICharacter &target);
};

#endif