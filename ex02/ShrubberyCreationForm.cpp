/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 15:22:21 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/30 17:50:54 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    std::string b = executor.getName();
    std::string f = this->getName();
    std::ofstream outputfile;    
    //check if Form is signed
    //check if the Bureaucrat grade is high enough to signed the form   
    if (executor.getGrade() < this->getGradeSigne())
    {
        std::cout<<this->target<<std::endl;
        outputfile.open((this->target + "_replace").c_str(), std::ios::trunc);
        outputfile<<ASCII_TREES<<std::endl;
        outputfile.close();
    }
    else
        throw (AForm::GradeTooLowException()); 
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm() : target("default")
{
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string FormName) : target(FormName)
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

