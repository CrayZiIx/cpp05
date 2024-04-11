/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 15:22:21 by jolecomt          #+#    #+#             */
/*   Updated: 2024/04/01 13:52:01 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

const std::string Intern::matchingTab[3] = {"shrubbery creation", "presidential form", "robotomy request"};


AForm	*Intern::createSC(const std::string &target)
{
	return (new ShrubberyCreationForm(target));
}
AForm	*Intern::createRR(const std::string &target) 
{
	return (new RobotomyRequestForm(target));
}
AForm	*Intern::createPP(const std::string &target) 
{
	return (new PresidentialPardonForm(target));
}

Intern::Intern() : job(false)
{
    return ;
}

Intern::Intern(const Intern &other) : job(false)
{
    *this = other;
    return ;
}

Intern::~Intern()
{
    return ;
}

Intern &Intern::operator=(const Intern *other)
{
    this->job = other->job;
    return (*this);
}

AForm *Intern::makeForm(std::string typeForm, std::string targetForm)
{
    int i = 0;
    AForm *(Intern::*matchingTabFct[3])(const std::string &) = {
        &Intern::createSC,
        &Intern::createRR, 
        &Intern::createPP
    };
    
    while (i < 3 && typeForm.compare(matchingTab[i]))
        i++;
    if (i == 3 && !(typeForm.compare(matchingTab[i])))
        i++;
    if (i > 3)
    {
        std::cout<<"Any form match from the list "<<i<<std::endl;
        return (NULL);
    }
    std::cout<<"Intern create "<<targetForm<<std::endl;
    return ((this->*matchingTabFct[i])(targetForm));
}