/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:30:04 by juramos           #+#    #+#             */
/*   Updated: 2024/08/01 11:42:30 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int	main()
{
	try
	{
		Bureaucrat	Mike("Mike", 3);
		Form		Stupid("Stupid", 5, 10);
		Form		Coolio("Coolio", 1, 20);

		Mike.signForm(Stupid);
		Mike.signForm(Coolio);

		Bureaucrat	Charles("Charles", 0);
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Unexpected exception." << std::endl;
	}
	return (0);
}
