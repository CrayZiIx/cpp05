/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 18:09:16 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/29 21:01:08 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
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
    private:
        const std::string   _name;
        const int           _gradeSigne;
        const int           _gradeExec;
        bool                _isSigned;
    public:
        Form(void);
        Form(const Form &other);
        Form(const std::string name, const int gradeSigne, const int gradeExec, bool isSigned);
        ~Form(void);
        Form &operator=(const Form &other);
        const std::string getName() const;
        int getGradeSigne() const;
        int getGradeExec() const;
        bool getSigned() const;
        
        void beSigned(Bureaucrat _bureaucrat);
};

std::ostream &operator<<(std::ostream &stream, const Form &other);