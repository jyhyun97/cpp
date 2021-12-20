/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:55:31 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/16 15:55:32 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default")
{
    this->_grade = 1;
};
Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooLowException();
    if (grade > 150)
        throw Bureaucrat::GradeTooHighException();
    this->_grade = grade;
};
Bureaucrat::Bureaucrat(const Bureaucrat &origin)
{
    *this = origin;
};
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &origin)
{
    if (this == &origin)
        return (*this);
    this->_grade = origin._grade;
    return (*this);
};

std::string Bureaucrat::getName() const
{
    return (this->_name);
};
int Bureaucrat::getGrade() const
{
    return (this->_grade);
};
void Bureaucrat::incrementGrade(int amount)
{
    if (_grade - amount < 1)
        throw Bureaucrat::GradeTooLowException();
    if (_grade - amount > 150)
        throw Bureaucrat::GradeTooHighException();
    this->_grade -= amount;
};
void Bureaucrat::decrementGrade(int amount)
{
    if (_grade + amount < 1)
        throw Bureaucrat::GradeTooLowException();
    if (_grade + amount > 150)
        throw Bureaucrat::GradeTooHighException();
    this->_grade += amount;
};

void Bureaucrat::signForm(Form &signForm)
{
    try{
        signForm.beSigned(*this);
        std::cout << this->getName() << " signs " << signForm.getName() << std::endl;
    }
    catch (const std::exception &e){
        std::cout << this->getName() << " cannot sign " << signForm.getName() << " because " << e.what() << std::endl;
    }
};

void Bureaucrat::executeForm(Form const & form){
    try{
        form.execute(*this);
    }
    catch(const std::exception &e) {
        std::cout << this->_name << " cannot execute " << form.getName() << " becuase " << e.what() << std::endl;
    }

};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat){
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return (out);
};