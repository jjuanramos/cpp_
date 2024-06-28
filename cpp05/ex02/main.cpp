/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:30:04 by juramos           #+#    #+#             */
/*   Updated: 2024/06/28 14:44:28 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main()
{
	ShrubberyCreationForm	Shru("HolyGrail");
	RobotomyRequestForm		Rob("Giant");
	PresidentialPardonForm	Biden("Biden");
	Bureaucrat				Mike("Mike", 1);
	Bureaucrat				Sully("Sully", 149);

	Mike.executeForm(Shru);
	Mike.executeForm(Rob);
	Mike.executeForm(Biden);
	Shru.beSigned(Mike);
	Mike.executeForm(Shru);
	Sully.executeForm(Shru);
	Biden.beSigned(Mike);
	Mike.executeForm(Biden);
	Rob.beSigned(Mike);
	Mike.executeForm(Rob);
	return (0);
}
