/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 15:22:12 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/31 17:32:15 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "AForm.hpp"
#include <iostream>
#include <string>

class PresidentialPardonForm : public AForm
{
    protected:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string FormName);
        PresidentialPardonForm(const PresidentialPardonForm &other);
        ~PresidentialPardonForm();
        PresidentialPardonForm &operator=(const PresidentialPardonForm *other);
        void execute(const Bureaucrat &executor) const;
        
};

std::ostream &operator<<(std::ostream &stream, const PresidentialPardonForm  &other);
