/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 15:22:12 by jolecomt          #+#    #+#             */
/*   Updated: 2024/04/01 13:42:55 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "Bureaucrat.hpp"
#include <fstream>
#include <string>
#include <sstream>
#include <exception>

class Intern
{
    protected:
        bool job;
        static const std::string matchingTab[3];
    public:
        Intern();
        Intern(const Intern &other);
        ~Intern();
        Intern &operator=(const Intern *other);
        AForm *makeForm(std::string typeForm, std::string targetForm);

};