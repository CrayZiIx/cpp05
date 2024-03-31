/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 18:09:16 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/31 14:17:04 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>

class Bureaucrat;

class AForm
{
    private:
        const std::string   _name;
        const int           _gradeSigne;
        const int           _gradeExec;
        bool                _isSigned;
    public:
        class GradeTooHighException : public std::exception
        {
            public:
                const char *what(void) const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char *what(void) const throw();
        };
        class FormNotSignedException : public std::exception
        {
            public:
                const char *what(void) const throw();
        };
        AForm(void);
        AForm(const AForm &other);
        AForm(const std::string name, const int gradeSigne, const int gradeExec, bool isSigned);
        virtual ~AForm(void);
        AForm &operator=(const AForm &other);
        virtual void execute(const Bureaucrat &executor) const = 0;
        const std::string getName() const;
        int getGradeSigne() const;
        int getGradeExec() const;
        bool getSigned() const;
        void beSigned(Bureaucrat _bureaucrat);
};

std::ostream &operator<<(std::ostream &stream, const AForm &other);