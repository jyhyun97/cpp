/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:41:12 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/03 16:41:13 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
    public :
        Cure();
        ~Cure();
        Cure(const Cure &origin);
        Cure &operator=(const Cure &origin);
        AMateria *clone() const;
        void use(ICharacter &target);
};
#endif