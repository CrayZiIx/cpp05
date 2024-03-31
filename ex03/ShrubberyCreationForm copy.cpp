/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 15:22:21 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/31 17:29:27 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    std::string b = executor.getName();
    std::string f = this->getName();
    std::ofstream outputfile;
    if (!this->getSigned())
        throw (AForm::FormNotSignedException());
    else if (executor.getGrade() > this->getGradeExec())
        throw(AForm::GradeTooLowException());
    {
        outputfile.open((this->target + "_shrubbery").c_str(), std::ios::trunc);
        outputfile<<ASCII_TREES<<std::endl;
        outputfile.close();
    }

    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation", 147, 137, false), target("Shrubbery_target")
{
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string FormName) : AForm("Shrubbery Creation", 147, 137, false), target(FormName)
{
    return ;
}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
{
    *this = other;
    return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm *other)
{
    this->target = other->target;
    return (*this);
}

