/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 18:09:18 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/30 16:34:50 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _name("Basic Formular"), _gradeSigne(150), _gradeExec(150), _isSigned(false)
{
    std::cout<<"AForm : Constructor - no parameters called"<<std::endl;
    return ;
}

AForm::AForm(const std::string name, const int gradeSigne, const int gradeExec, bool isSigned) : _name(name), _gradeSigne(gradeSigne), _gradeExec(gradeExec), _isSigned(isSigned)
{
    std::cout<<"AForm : Constructor - const std::string name, const int gradeSigne, const int gradeExec"<<std::endl;
    if ((gradeExec) > 150 || (gradeSigne) > 150)
        throw (AForm::GradeTooLowException());
    else if ((gradeExec) < 1 || (gradeSigne) < 1)
        throw (AForm::GradeTooHighException());
    return ;
}

AForm::AForm(const AForm &other) : _name(other._name), _gradeSigne(other._gradeSigne), _gradeExec(other._gradeExec)
{
    std::cout<<"AForm : Constructor - const Bureau &other called"<<std::endl;
    *this = other;
    return ;
}

AForm::~AForm(void)
{
    std::cout<<"AForm : Destructor - no parameters called"<<std::endl;
    return ;
}

AForm &AForm::operator=(const AForm &other)
{
    std::cout<<"AForm : Assigment Operator - Assigment Operator called"<<std::endl;
    this->_isSigned = other._isSigned;
    return (*this);
}

const std::string AForm::getName() const
{
    return (this->_name);
}

bool AForm::getSigned() const
{
    return (this->_isSigned);
}

int AForm::getGradeSigne() const
{
    return (this->_gradeSigne);
}
int AForm::getGradeExec() const
{
    return (this->_gradeExec);
}

void AForm::beSigned(Bureaucrat _bureaucrat)
{
    if (_bureaucrat.getGrade() > this->_gradeSigne)
        throw (AForm::GradeTooLowException());
    else
        this->_isSigned = true;
}

const char *AForm::GradeTooHighException::what(void) const throw()
{
    return ("Grade too High");
}

const char *AForm::GradeTooLowException::what(void) const throw()
{
    return ("Grade too Low");
}

std::ostream &operator<<(std::ostream &stream, const AForm &other)
{    
    stream<<other.getName();
    stream<<other.getSigned();
    stream<<other.getGradeSigne();
    stream<<other.getGradeExec();
    return (stream);
}