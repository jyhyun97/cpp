/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:52:04 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/16 15:52:12 by jeonhyun         ###   ########.fr       */
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
        bool _isSign;
        int _signGrade;
        int _executeGrade;
    public :
        Form();
        Form(std::string name, int signGrade, int executeGrade);
        ~Form(){};
        Form(const Form &origin);
        Form &operator=(const Form &origin);

        std::string getName() const;
        bool getIsSign() const;
        int getSignGrade() const;
        int getExecuteGrade() const;

        void beSigned(const Bureaucrat &signer);//사인하기
        
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw() {
                    return ("signer's grade is to much low");
                }
        };
        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw() {
                    return ("signer's grade is to much high");
                }
        };
};

std::ostream &operator<<(std::ostream &out, const Form &form);
        
#endif