/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 15:22:12 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/30 17:47:15 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#define ASCII_TREES \
"       _-_          \n"\
"    /~~   ~~\\       \n"\
" /~~         ~~     \n"\
"{               }   \n"\
" \\  _-     -_  /    \n"\
"   ~  \\ //  ~      \n"\
"_- -   | | _- _     \n"\
"  _ -  | |   -_     \n"\
"      // \\         \n"\
"       _-_          \n"\
"    /~~   ~~\\       \n"\
" /~~         ~~     \n"\
"{               }   \n"\
" \\  _-     -_  /    \n"\
"   ~  \\ //  ~      \n"\
"_- -   | | _- _     \n"\
"  _ -  | |   -_     \n"\
"      // \\         \n"\
"       _-_          \n"\
"    /~~   ~~\\       \n"\
" /~~         ~~     \n"\
"{               }   \n"\
" \\  _-     -_  /    \n"\
"   ~  \\ //  ~      \n"\
"_- -   | | _- _     \n"\
"  _ -  | |   -_     \n"\
"      // \\         \n"


#include "AForm.hpp"
#include <fstream>
#include <string>
#include <sstream>
#include <exception>

class ShrubberyCreationForm : public AForm
{
    protected:
        std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string FormName);
        ShrubberyCreationForm(const ShrubberyCreationForm &other);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm *other);
        void execute(const Bureaucrat &executor) const;
        
};