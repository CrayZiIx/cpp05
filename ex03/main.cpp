/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:50:22 by jolecomt          #+#    #+#             */
/*   Updated: 2024/04/01 13:54:32 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{ 
	try
	{
		Bureaucrat bc(151);
	}
	catch (std::exception &e)
	{
		std::cerr<<e.what()<<std::endl;
	}
	std::cout<<std::endl;
	try
	{
		Bureaucrat bc2(0);
	}
	catch (std::exception &e)
	{
		std::cerr<<e.what()<<std::endl;
	}
	std::cout<<std::endl;
	try
	{
		Bureaucrat bc3(1);
		
		bc3.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cerr<<e.what()<<std::endl;
	}
	std::cout<<std::endl;
	try
	{
		Bureaucrat bc4(150);
		
		bc4.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cerr<<e.what()<<std::endl;
	}
	std::cout<<std::endl;
	try
	{
		Bureaucrat bc5(100);
		
		bc5.incrementGrade();
		std::cout<<bc5.getGrade()<<std::endl;
		bc5.decrementGrade();
		std::cout<<bc5.getGrade()<<std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr<<e.what()<<std::endl;
	}
	std::cout<<std::endl;
	try
	{
		Bureaucrat b(5);
		ShrubberyCreationForm scf("fdp");

		scf.beSigned(b);
		scf.execute(b);
	}
	catch (std::exception &e)
	{
		std::cerr<<e.what()<<std::endl;
	}
	std::cout<<std::endl;
	try
	{
		Bureaucrat b(150);
		ShrubberyCreationForm scf;

		std::cout<<b.getGrade()<<" "<<scf.getGradeSigne()<<std::endl;
		b.signForm(scf);
		b.executeForm(scf);;
	}
	catch (std::exception &e)
	{
		std::cerr<<e.what()<<std::endl;
	}
	std::cout<<std::endl;
	try
	{
		Bureaucrat b(137);
		ShrubberyCreationForm scf;

		std::cout<<b.getGrade()<<" "<<scf.getGradeSigne()<<std::endl;
		b.signForm(scf);
		b.executeForm(scf);
	}
	catch(std::exception& e)
	{
		std::cerr<< e.what()<<std::endl;
	}
	std::cout<<std::endl;
	try
	{
		Bureaucrat b(30);
		RobotomyRequestForm rrf;

		b.signForm(rrf);
		b.executeForm(rrf);
	}
	catch(std::exception& e)
	{
		std::cerr<<e.what()<<std::endl;
	}
	std::cout<<std::endl;
	try
	{
		Bureaucrat b(15);
		PresidentialPardonForm ppf("DSK");

		b.signForm(ppf);
		b.executeForm(ppf);
	}
	catch(std::exception& e)
	{
		std::cerr<<e.what()<<std::endl;
	}
	std::cout<<std::endl;
	try
	{
		Intern rdmIntern;
		AForm *f;

		f = rdmIntern.makeForm("", "testouille");
		if (f)
			std::cout<<&f<<std::endl;
		delete f;
		f = rdmIntern.makeForm("shrubbery creation", "testouille");
		if (f)
			std::cout<<*f<<std::endl;
		delete f;
		f = rdmIntern.makeForm("presidential form", "testouille");
		if (f)
			std::cout<<*f<<std::endl;
		delete f;
		f = rdmIntern.makeForm("robotomy request", "testouille");
		if (f)
			std::cout<<*f<<std::endl;
		delete f;
		
	}
	catch(std::exception& e)
	{
		std::cerr<<e.what()<<std::endl;
	}
		
	return (0);
}