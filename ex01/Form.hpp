/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 18:09:16 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/28 18:15:26 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Form
{
    class GradeTooHighException : public std::exception
    {
        public:
            const char *what(void) const throw();
    };
    class GradeLowHighException : public std::exception
    {
        public:
            const char *what(void) const throw();
    };
    private:
        const std::string   name;
        const int           gradeSigne;
        const int           gradeExec;
        bool                isSigned;
    public:
        Form(void);
        Form(const Form &other);
        ~Form(void);
        Form &operator=(const Form &other);
};