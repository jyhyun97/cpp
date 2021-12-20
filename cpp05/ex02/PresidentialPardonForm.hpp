/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:56:16 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/16 15:56:16 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PP_FORM_HPP
# define PP_FORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    public :
        PresidentialPardonForm() : Form("PresidentialPardonForm", "default", 25, 5) {};
        PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", target, 25, 5) {};
        ~PresidentialPardonForm(){};
        PresidentialPardonForm(const PresidentialPardonForm &origin);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &origin);
        void execute(Bureaucrat const & executor) const;
};

#endif