/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:57:33 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/16 15:57:34 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public :
        Intern(){};
        ~Intern(){};
        Intern(const Intern &origin){
            *this = origin;
        };
        Intern &operator=(const Intern &origin){
            if (this == &origin)
                return (*this);
            return (*this);
        };
        Form *makeForm(std::string name, std::string target);

        class FormNameException : public std::exception
        {
            public:
                const char* what() const throw() {
                    return ("There's no matching form name");
                }
        };
};

#endif