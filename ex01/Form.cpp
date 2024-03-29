/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 18:09:18 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/29 20:17:34 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Basic Formular"), _gradeSigne(150), _gradeExec(150), _isSigned(false)
{
    std::cout<<"Form : Constructor - no parameters called"<<std::endl;
    return ;
}

Form::Form(const std::string name, const int gradeSigne, const int gradeExec, bool isSigned) : _name(name), _gradeSigne(gradeSigne), _gradeExec(gradeExec), _isSigned(isSigned)
{
    std::cout<<"Form : Constructor - const std::string name, const int gradeSigne, const int gradeExec"<<std::endl;
    if ((gradeExec) > 150 || (gradeSigne) > 150)
        throw (Form::GradeTooLowException());
    else if ((gradeExec) < 1 || (gradeSigne) < 1)
        throw (Form::GradeTooHighException());
    return ;
}

Form::Form(const Form &other) : _name(other._name), _gradeSigne(other._gradeSigne), _gradeExec(other._gradeExec)
{
    std::cout<<"Form : Constructor - const Bureau &other called"<<std::endl;
    *this = other;
    return ;
}

Form::~Form(void)
{
    std::cout<<"Form : Destructor - no parameters called"<<std::endl;
    return ;
}

Form &Form::operator=(const Form &other)
{
    std::cout<<"Form : Assigment Operator - Assigment Operator called"<<std::endl;
    this->_isSigned = other._isSigned;
    return (*this);
}

const std::string Form::getName() const
{
    return (this->_name);
}

bool Form::getSigned() const
{
    return (this->_isSigned);
}

void Form::beSigned(Bureaucrat _bureaucrat)
{
    if (_bureaucrat.getGrade() > this->_gradeSigne)
        throw (Form::GradeTooLowException());
    else
        this->_isSigned = true;
    std::string s = _bureaucrat.getName(); // delete this
    std::cout<<"\""<<s<<"\", signed \""<<this->getName()<<"\""<<std::endl; // delete this
}

const char *Form::GradeTooHighException::what(void) const throw()
{
    return ("Grade too High");
}

const char *Form::GradeTooLowException::what(void) const throw()
{
    return ("Grade too Low");
}