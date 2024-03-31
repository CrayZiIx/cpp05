/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 15:22:21 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/31 17:42:02 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    int test;
    
    if (!this->getSigned())
        throw (AForm::FormNotSignedException());
    else if (executor.getGrade() > this->getGradeExec())
        throw(AForm::GradeTooLowException());
    {
        srand(time(NULL));
        test = rand() % 2;
        if (test)
            std::cout<<this->target<<" has been robotomized successfully 50% of the time"<<std::endl;
        else 
            std::cout<<this->target<<" hasn't been robotomized unsuccessfully 50% of the time"<<std::endl;
    }

    return ;
}

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request", 72, 45, false), target("Robotomy_target")
{
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string FormName) : AForm("Robotomy Request", 72, 45, false), target(FormName)
{
    return ;
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
{
    *this = other;
    return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm *other)
{
    this->target = other->target;
    return (*this);
}

std::ostream &operator<<(std::ostream &stream, const RobotomyRequestForm &other)
{
    stream<<other.getName()<<std::endl;
    stream<<other.getSigned()<<std::endl;
    stream<<other.getGradeExec()<<std::endl;
    stream<<other.getGradeSigne()<<std::endl;
    return (stream);
}

