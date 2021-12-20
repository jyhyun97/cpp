/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:56:26 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/16 15:56:27 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SC_FORM_HPP
# define SC_FORM_HPP

#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    public :
        ShrubberyCreationForm() : Form("ShrubberyCreationForm", "default", 145, 137) {};
        ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", target, 145, 137) {};
        ~ShrubberyCreationForm(){};
        ShrubberyCreationForm(const ShrubberyCreationForm &origin);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &origin);
        void execute(Bureaucrat const & executor) const;
};

#endif