/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:50:22 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/28 17:51:34 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{ 
	try
	{
		Bureaucrat bc(151);
	}
	catch (std::exception &e)
	{
		std::cout<<e.what()<<std::endl;
	}
	std::cout<<std::endl;
	try
	{
		Bureaucrat bc2(0);
	}
	catch (std::exception &e)
	{
		std::cout<<e.what()<<std::endl;
	}
	std::cout<<std::endl;
	try
	{
		Bureaucrat bc3(1);
		
		bc3.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout<<e.what()<<std::endl;
	}
	std::cout<<std::endl;
	try
	{
		Bureaucrat bc4(150);
		
		bc4.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout<<e.what()<<std::endl;
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
		std::cout<<e.what()<<std::endl;
	}
	
	return (0);
}