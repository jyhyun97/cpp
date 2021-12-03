/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:41:04 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/03 16:41:07 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
    private :
        AMateria *inventory[4];
        std::string name;
    public :
        Character(std::string name);
        ~Character();
        Character(const Character &origin);
        Character &operator=(const Character &origin);

        std::string const & getName() const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif