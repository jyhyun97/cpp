/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:57:29 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/16 15:57:30 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form *Intern::makeForm(std::string name, std::string target)
{
    std::string name_arr[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    int i = 0;
    while (i < 3 && name.compare(name_arr[i]))
        i++;
    Form *rtn;
    switch (i)
    {
    case 0:
        rtn = new ShrubberyCreationForm(target);
        break;
    case 1:
        rtn = new RobotomyRequestForm(target);
        break;
    case 2:
        rtn = new PresidentialPardonForm(target);
        break;
    default:
        throw FormNameException();
        break;
    }
    return (rtn);
};