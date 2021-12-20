/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:56:21 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/16 15:56:21 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RR_FORM_HPP
# define RR_FORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    public :
        RobotomyRequestForm() : Form("RobotomyRequestForm", "Defalut", 72, 45) {};
        RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", target, 72, 45) {};
        ~RobotomyRequestForm(){};
        RobotomyRequestForm(const RobotomyRequestForm &origin);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &origin);
        void execute(Bureaucrat const & executor) const;
};

#endif