/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:55:40 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/16 15:55:41 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(){
    _name = "default";
    _target = "default";
    _isSign = 0;
    _signGrade = 1;
    _executeGrade = 1;
};

Form::Form(std::string name, std::string target, int signGrade, int executeGrade){
    _name = name;
    _target = target;
    _isSign = 0;
    _signGrade = signGrade;
    _executeGrade = executeGrade;
};
Form::Form(const Form &origin){
    *this = origin;
};
Form &Form::operator=(const Form &origin)
{
    if (this == &origin)
        return (*this);
    this->_name = origin._name;
    this->_target = origin._target;
    this->_isSign = origin._isSign;
    this->_signGrade = origin._signGrade;
    this->_executeGrade = origin._executeGrade;
    return (*this);
};

std::string Form::getName() const{
    return (this->_name);
};
std::string Form::getTarget() const{
    return (this->_target);
};
bool Form::getIsSign() const {
    return (this->_isSign);
};
int Form::getSignGrade() const {
    return (this->_signGrade);
};
int Form::getExecuteGrade() const {
    return (this->_executeGrade);
};

void Form::beSigned(const Bureaucrat &signer){
    if (signer.getGrade() > _signGrade)
        throw GradeTooLowException();
    _isSign = 1;
};

void Form::execute(Bureaucrat const & executor) const{
    if (this->getIsSign() == 0)
        throw NotSigned();
    if (executor.getGrade() > this->getExecuteGrade())
        throw GradeTooLowException();
};

std::ostream &operator<<(std::ostream &out, const Form &form){
    out << "formname : "<< form.getName() << ", formsigned : " << form.getIsSign() << ", formGrade : " << form.getSignGrade() << ", formExecuteGrade : " << form.getExecuteGrade();
    return (out);
};
