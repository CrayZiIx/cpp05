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
    while (i < 3 && typeForm.compare(matchingTab[i]))
        i++;
    switch (i)
    {
        case (0):
            return (new ShrubberyCreationForm(targetForm));
        case (1):
            return (new PresidentialPardonForm(targetForm));
        case (2):
            std::cout<<"test"<<std::endl;
            return (new RobotomyRequestForm(targetForm));
        default:
            std::cout<<"No Form has this type "<<typeForm<<" !"<<std::endl;
            return (NULL);
    }
}


