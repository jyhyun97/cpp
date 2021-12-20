/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:56:18 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/16 15:56:19 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &origin)
{
    *this = origin;
};
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &origin)
{
    if (this == &origin)
        return (*this);
    this->Form::operator=(origin);
    return (*this);
};
void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (this->getIsSign() == 0)
        throw NotSigned();
    if (executor.getGrade() > this->getExecuteGrade())
        throw GradeTooLowException();
    std::cout << "* drrrrrrr *" << std::endl;
    if (std::rand() % 2 == 0)
        std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
    else
        std::cout << this->getTarget() << " has been robotomized failed" << std::endl;
};