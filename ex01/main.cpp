/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:50:22 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/29 21:02:26 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

// int main(void)
// { 
// 	try
// 	{
// 		Bureaucrat bc(151);
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cout<<e.what()<<std::endl;
// 	}
// 	std::cout<<std::endl;
// 	try
// 	{
// 		Bureaucrat bc2(0);
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cout<<e.what()<<std::endl;
// 	}
// 	std::cout<<std::endl;
// 	try
// 	{
// 		Bureaucrat bc3(1);
		
// 		bc3.decrementGrade();
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cout<<e.what()<<std::endl;
// 	}
// 	std::cout<<std::endl;
// 	try
// 	{
// 		Bureaucrat bc4(150);
		
// 		bc4.incrementGrade();
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cout<<e.what()<<std::endl;
// 	}
// 	std::cout<<std::endl;
// 	try
// 	{
// 		Bureaucrat bc5(100);
		
// 		bc5.incrementGrade();nt main(void)
// { 
// 	try
// 	{
// 		Bureaucrat bc(151);
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cout<<e.what()<<std::endl;
// 	}
// 	std::cout<<std::endl;
// 	try
// 	{
// 		Bureaucrat bc2(0);
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cout<<e.what()<<std::endl;
// 	}
// 	std::cout<<std::endl;
// 	try
// 	{
// 		Bureaucrat bc3(1);
		
// 		bc3.decrementGrade();
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cout<<e.what()<<std::endl;
// 	}
// 	std::cout<<std::endl;
// 	try
// 	{
// 		Bureaucrat bc4(150);
		
// 		bc4.incrementGrade();
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cout<<e.what()<<std::endl;
// 	}
// 	std::cout<<std::endl;
// 	try
// 	{
// 		Bureaucrat bc5(100);
		
// 		bc5.incrementGrade();
// 		std::cout<<bc5.getGrade()<<std::endl;
// 		bc5.decrementGrade();
// 		std::cout<<bc5.getGrade()<<std::endl;
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cout<<e.what()<<std::endl;
// 	}
// 	std::cout<<std::endl;
// 	try
// 	{
// 		Form a;
// 		Form b("Test", 10, 10, true);
	
// 		std::cout<<"Form a._isSigned = "<<a.getSigned()<<std::endl;
// 		a = b;
// 		std::cout<<"Form a._isSigned = "<<a.getSigned()<<std::endl;
// 	}
// 	catch( std::exception& e)
// 	{
// 		std::cerr<<e.what()<<std::endl;
// 	}
// 	std::cout<<std::endl;
// 	try
// 	{
// 		Form a("High Grade Signe", 151, 10, true);
	
// 	}
// 	catch( std::exception& e)
// 	{
// 		std::cerr<<e.what()<<std::endl;
// 	}
// 	std::cout<<std::endl;
// 	try
// 	{
// 		Form a("Low Grade Signe", 0, 10, true);
	
// 	}
// 	catch( std::exception& e)
// 	{
// 		std::cerr<<e.what()<<std::endl;
// 	}
// 	std::cout<<std::endl;
// 	try
// 	{
// 		Form a("High Grade Exec", 151, 10, true);
	
// 	}
// 	catch( std::exception& e)
// 	{
// 	std::cerr<<e.what()<<std::endl;
// 	}
// 	std::cout<<std::endl;
// 	try
// 	{
// 		Form a("Low Grade Exec", 0, 10, true);
	
// 	}
// 	catch( std::exception& e)
// 	{
// 		std::cerr<<e.what()<<std::endl;
// 	}
// 	std::cout<<std::endl;
// 	try
// 	{
// 		Bureaucrat b(6);
// 		Form a("Try to signe a form", 5, 10, false);

// 		std::cout<<"Try to signe A"<<std::endl;
// 		a.beSigned(b);
	
// 	}
// 	catch( std::exception& e)
// 	{
// 		std::cerr<<e.what()<<std::endl;
// 	}
// 	std::cout<<std::endl;
// 	try
// 	{
// 		Bureaucrat b(5);
// 		Form a("Form", 5, 10, false);

// 		std::cout<<"Signe the form"<<std::endl;
// 		a.beSigned(b);
	
// 	}
// 	catch( std::exception& e)
// 	{
// 		std::cerr<<e.what()<<std::endl;
// 	}
// 	std::cout<<std::endl;
// 	try
// 	{
// 		Bureaucrat b(5);
// 		Form a("Form", 5, 10, false);

// 		std::cout<<"Bureaucraft try to signe A"<<std::endl;
// 		b.signForm(a);
// 		b.signForm(a);
// 		std::cout<<a<<std::endl;
// 	}
// 	catch( std::exception& e)
// 	{
// 		std::cerr<<e.what()<<std::endl;
// 	}
	
// 	return (0);
// }
// 		std::cout<<bc5.getGrade()<<std::endl;
// 		bc5.decrementGrade();
// 		std::cout<<bc5.getGrade()<<std::endl;
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cout<<e.what()<<std::endl;
// 	}
// 	std::cout<<std::endl;
// 	try
// 	{
// 		Form a;
// 		Form b("Test", 10, 10, true);
	
// 		std::cout<<"Form a._isSigned = "<<a.getSigned()<<std::endl;
// 		a = b;
// 		std::cout<<"Form a._isSigned = "<<a.getSigned()<<std::endl;
// 	}
// 	catch( std::exception& e)
// 	{
// 		std::cerr<<e.what()<<std::endl;
// 	}
// 	std::cout<<std::endl;
// 	try
// 	{
// 		Form a("High Grade Signe", 151, 10, true);
	
// 	}
// 	catch( std::exception& e)
// 	{
// 		std::cerr<<e.what()<<std::endl;
// 	}
// 	std::cout<<std::endl;
// 	try
// 	{
// 		Form a("Low Grade Signe", 0, 10, true);
	
// 	}
// 	catch( std::exception& e)
// 	{
// 		std::cerr<<e.what()<<std::endl;
// 	}
// 	std::cout<<std::endl;
// 	try
// 	{
// 		Form a("High Grade Exec", 151, 10, true);
	
// 	}
// 	catch( std::exception& e)
// 	{
// 	std::cerr<<e.what()<<std::endl;
// 	}
// 	std::cout<<std::endl;
// 	try
// 	{
// 		Form a("Low Grade Exec", 0, 10, true);
	
// 	}
// 	catch( std::exception& e)
// 	{
// 		std::cerr<<e.what()<<std::endl;
// 	}
// 	std::cout<<std::endl;
// 	try
// 	{
// 		Bureaucrat b(6);
// 		Form a("Try to signe a form", 5, 10, false);

// 		std::cout<<"Try to signe A"<<std::endl;
// 		a.beSigned(b);
	
// 	}
// 	catch( std::exception& e)
// 	{
// 		std::cerr<<e.what()<<std::endl;
// 	}
// 	std::cout<<std::endl;
// 	try
// 	{
// 		Bureaucrat b(5);
// 		Form a("Form", 5, 10, false);

// 		std::cout<<"Signe the form"<<std::endl;
// 		a.beSigned(b);
	
// 	}
// 	catch( std::exception& e)
// 	{
// 		std::cerr<<e.what()<<std::endl;
// 	}
// 	std::cout<<std::endl;
// 	try
// 	{
// 		Bureaucrat b(5);
// 		Form a("Form", 5, 10, false);

// 		std::cout<<"Bureaucraft try to signe A"<<std::endl;
// 		b.signForm(a);
// 		b.signForm(a);
// 		std::cout<<a<<std::endl;
// 	}
// 	catch( std::exception& e)
// 	{
// 		std::cerr<<e.what()<<std::endl;
// 	}
	
// 	return (0);
// }

int main()
{
	Bureaucrat steve("Steve", 3);
	Bureaucrat john("John", 148);

	Form timbre("Timbre fiscal", 30, 20, false);
	Form impot("Declaration d'impots", 150, 20, false);

	std::cout<<timbre<<std::endl;

	steve.signForm(timbre);
	john.signForm(timbre);
	john.signForm(impot);

	std::cout<<timbre<<std::endl;

	try
	{
		timbre.beSigned(john);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Form invalidLow("Invalid", 151, 20, false);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Form invalidHigh("Invalid", 0, 20, false);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}