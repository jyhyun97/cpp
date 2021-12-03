/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:41:17 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/03 16:41:18 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public :
        Ice();
        ~Ice();
        Ice(const Ice &origin);
        Ice &operator=(const Ice &origin);
        AMateria *clone() const;
        void use(ICharacter &target);
};

#endif