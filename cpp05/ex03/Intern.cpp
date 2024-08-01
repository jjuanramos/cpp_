/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 09:40:16 by juramos           #+#    #+#             */
/*   Updated: 2024/08/01 12:22:36 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	 this->forms[0] = "robotomy request";
	 this->forms[1] = "presidential pardon";
	 this->forms[2] = "shrubbery creation";
}

Intern::Intern(Intern const& copy)
{
	(void)copy;
}

Intern&	Intern::operator=(Intern const& other)
{
	(void)other;
	return (*this);
}

Intern::~Intern()
{
}

AForm*	Intern::makeForm(std::string name, std::string target) const
{
	int	i = 0;
	while (i < 4)
	{
		if (!this->forms[i].compare(name)) 
			break ;
		i++;
	}
	switch(i)
	{
		case(0):
			return (new RobotomyRequestForm(target));
		case (1):
			return (new PresidentialPardonForm(target));
		case (2):
			return (new ShrubberyCreationForm(target));
		default:
		{
			std::cout << "Form " << name << " not found. Returning NULL." << std::endl;
			return (NULL);
		}
	}
}
