/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:57:58 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/16 15:57:59 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &origin)
{
    *this = origin;
};
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &origin)
{
    if (this == &origin)
        return (*this);
    this->Form::operator=(origin);
    return (*this);
};
void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (this->getIsSign() == 0)
        throw NotSigned();
    if (executor.getGrade() > this->getExecuteGrade())
        throw GradeTooLowException();
    std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
};