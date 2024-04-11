/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 15:22:21 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/31 17:38:57 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    if (!this->getSigned())
        throw (AForm::FormNotSignedException());
    else if (executor.getGrade() > this->getGradeExec())
        throw(AForm::GradeTooLowException());
    else
        std::cout<<this->target<<" has been pardoned by Zaphod Beeblebrox."<<std::endl;

    return ;
}

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon", 25, 5, false), target("Presidential_pardon")
{
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string FormName) : AForm("Presidential Pardon", 25, 5, false), target(FormName)
{
    return ;
}


PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
{
    *this = other;
    return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm *other)
{
    this->target = other->target;
    return (*this);
}

std::ostream &operator<<(std::ostream &stream, const PresidentialPardonForm &other)
{
    stream<<other.getName()<<std::endl;
    stream<<other.getSigned()<<std::endl;
    stream<<other.getGradeExec()<<std::endl;
    stream<<other.getGradeSigne()<<std::endl;
    return (stream);
}

