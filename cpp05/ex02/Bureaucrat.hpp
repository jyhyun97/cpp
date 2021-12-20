/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:55:34 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/16 15:55:35 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private :
        const std::string _name;
        int _grade;
    public : 
        Bureaucrat();
        Bureaucrat(const std::string &name, int grade);
        ~Bureaucrat(){};
        Bureaucrat(const Bureaucrat &origin);
        Bureaucrat &operator=(const Bureaucrat &origin);

        std::string getName() const;
        int getGrade() const;
        void incrementGrade(int amount);
        void decrementGrade(int amount);
        
        void signForm(Form &signForm);
        void executeForm(Form const & form);

        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw() {
                    return ("Grade too low");
                }
        };
        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw() {
                    return ("grade too high");
                }
        };
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif