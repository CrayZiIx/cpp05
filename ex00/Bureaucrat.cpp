/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:51:22 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/28 17:41:22 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("Unamed")
{
    std::cout<<"Bureaucrat : Constructor - no parameters called"<<std::endl;
    this->grade = 150;
    return ;
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return ("Grade to High");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return ("Grade to Low");
}

Bureaucrat::Bureaucrat(int _grade) : name("Unamed")
{
    std::cout<<"Bureaucrat : Constructor - int _grade "<<std::endl;
    if (_grade > 150)
        throw (Bureaucrat::GradeTooLowException());
    else if (_grade < 1)
        throw (Bureaucrat::GradeTooHighException());
    else
        this->grade = _grade;
    return ;
}

Bureaucrat::Bureaucrat(std::string name, int _grade) : name(name)
{
    std::cout<<"Bureaucrat : Constructor - std::string name | int _grade "<<std::endl;
    if (_grade  + 1 > 150)
        throw (Bureaucrat::GradeTooLowException());
    else if (_grade - 1 < 1)
        throw (Bureaucrat::GradeTooHighException());
    else
        this->grade = _grade;
    return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name("UnamedCpy")
{
    std::cout<<"Bureaucrat : Constructor - const Bureau &other called"<<std::endl;
    *this = other;
    return ;
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout<<"Bureaucrat : Destructor - no parameters called"<<std::endl;
    return ;
}

const std::string &Bureaucrat::getName(void) const
{
    std::cout<<"Bureaucrat : getName called"<<std::endl;
    return (this->name);
}

int Bureaucrat::getGrade(void) const
{
    std::cout<<"Bureaucrat : getGrade called"<<std::endl;
    return (this->grade);
}


Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    std::cout<<"Bureaucrat : Assigment Operator - Assigment Operator called"<<std::endl;
    this->grade = other.grade;
    return (*this);
}

std::ostream &operator<<(std::ostream &stream, const Bureaucrat &other)
{
	std::cout<<"Fixed : Left Shift - Bitwise Operator called"<<std::endl;
    stream << other.getName()<<", bureaucrat grade "<<other.getGrade()<<"."<<std::endl;
    return (stream);
}

void Bureaucrat::incrementGrade(void)
{
    std::cout<<"Bureaucrat : decrementGrade called"<<std::endl;
    if (this->grade - 1 < 1)
        throw (Bureaucrat::GradeTooHighException());
    else
        this->grade -= 1;
    return ;
}

void Bureaucrat::decrementGrade(void)
{
    std::cout<<"Bureaucrat : incrementGrade called"<<std::endl;
    if (this->grade  + 1 > 150)
        throw (Bureaucrat::GradeTooLowException());
    else
        this->grade += 1;
    return ;
}

