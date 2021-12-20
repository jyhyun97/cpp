/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:50:30 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/16 15:50:32 by jeonhyun         ###   ########.fr       */
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

std::ostream &operator<<(std::ostream &out, const Bureaucrat &Bureaucrat){
    out << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade();
    return (out);
};