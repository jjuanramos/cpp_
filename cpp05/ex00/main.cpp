/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:30:04 by juramos           #+#    #+#             */
/*   Updated: 2024/06/27 10:57:26 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat	Mike("Mike", 3);
		std::cout << Mike << std::endl;
		Bureaucrat	Charles("Charles", 150);
		--Charles;
		Bureaucrat	Juan("Juan", 0);
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cout << "No way there's someone with such a range!" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cout << "I'm sorry, but what a loser." << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Unexpected exception." << std::endl;
	}
	return (0);
}
