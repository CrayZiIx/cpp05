/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:51:27 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/30 17:24:49 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
    class GradeTooHighException : public std::exception
    {
        public:
            const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            const char *what() const throw();
    };
    protected:
        const std::string name;
        int grade;
    public:
        Bureaucrat(void);
        Bureaucrat(int _grade);
        Bureaucrat(const Bureaucrat &other);
        ~Bureaucrat(void);
        
        const std::string &getName(void) const;
        int getGrade(void) const;
        void incrementGrade(void);
        void decrementGrade(void);
        Bureaucrat &operator=(const Bureaucrat &other);
        void signForm(AForm &_form);

};

std::ostream &operator<<(std::ostream &stream, const Bureaucrat &other);