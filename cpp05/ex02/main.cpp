/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:56:01 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/16 15:56:02 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat A("[A]", 100);
    ShrubberyCreationForm B("[B]");
    Bureaucrat C("[C]", 40);
    RobotomyRequestForm D("[D]");
    Bureaucrat E("[E]", 5);
    PresidentialPardonForm F("[F]");
    try
    {
        A.signForm(B);
        A.executeForm(B);
        C.signForm(D);
        C.executeForm(D);
        E.signForm(F);
        E.executeForm(F);
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}