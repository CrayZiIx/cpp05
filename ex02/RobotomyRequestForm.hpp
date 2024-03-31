/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 15:22:12 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/31 17:06:50 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "AForm.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <exception>

class RobotomyRequestForm : public AForm
{
    protected:
        std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string FormName);
        RobotomyRequestForm(const RobotomyRequestForm &other);
        ~RobotomyRequestForm();
        RobotomyRequestForm &operator=(const RobotomyRequestForm *other);
        void execute(const Bureaucrat &executor) const;
        
};

std::ostream &operator<<(std::ostream &stream, const RobotomyRequestForm  &other);
