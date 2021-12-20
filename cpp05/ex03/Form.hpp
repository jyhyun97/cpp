/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:57:12 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/16 15:57:24 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private :
        std::string _name;
        std::string _target;
        bool _isSign;
        int _signGrade;
        int _executeGrade;
    public :
        Form();
        Form(std::string name, std::string target, int signGrade, int executeGrade);
        virtual ~Form(){};
        Form(const Form &origin);
        Form &operator=(const Form &origin);

        std::string getName() const;
        std::string getTarget() const;
        bool getIsSign() const;
        int getSignGrade() const;
        int getExecuteGrade() const;

        void beSigned(const Bureaucrat &signer);
        virtual void execute(Bureaucrat const & executor) const = 0;
        
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw() {
                    return ("Bureaucrat's grade is to much low");
                }
        };
        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw() {
                    return ("Bureaucrat's grade is to much high");
                }
        };

        class NotSigned : public std::exception
        {
            public :
                const char* what() const throw() {
                    return ("Not Signed Form");
                }
        };
};

std::ostream &operator<<(std::ostream &out, const Form &form);
        
#endif