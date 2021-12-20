/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:58:07 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/16 15:58:08 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &origin){
    *this = origin;
};
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &origin){
    if (this == &origin)
        return (*this);
    this->Form::operator=(origin);
    return (*this);
};
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    if (this->getIsSign() == 0)
        throw NotSigned();
    if (executor.getGrade() > this->getExecuteGrade())
        throw GradeTooLowException();
    std::ofstream treefile;
    treefile.open(this->getTarget()+ "_shrubbery");
    treefile << "   *\n  ***\n *****\n   *" << std::endl;
    treefile.close();
};
