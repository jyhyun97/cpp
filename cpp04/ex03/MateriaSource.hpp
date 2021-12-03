/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:41:35 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/03 16:41:51 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
    private :
        AMateria *learn[4];
    public :
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource &origin);
        MateriaSource &operator=(const MateriaSource &origin);

        void learnMateria(AMateria *origin);
        AMateria* createMateria(std::string const & type);
};


#endif