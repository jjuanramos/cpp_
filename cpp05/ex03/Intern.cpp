/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 09:40:16 by juramos           #+#    #+#             */
/*   Updated: 2024/07/01 10:11:51 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(/* args */)
{
}

Intern::~Intern()
{
}

AForm*	Intern::makeAForm(std::string name, std::string target) const
{
	std::map<std::string, int>	AForm_map;
	AForm_map["robotomy request"] = 1;
	AForm_map["presidential pardon"] = 2;
	AForm_map["shrubbery creation"] = 3;

	std::map<std::string, int>::iterator it = AForm_map.find(name);
	if (it != AForm_map.end())
	{
		switch(it->second)
		{
			case(1):
				return (new RobotomyRequestForm(target));
			case (2):
				return (new PresidentialPardonForm(target));
			case (3):
				return (new ShrubberyCreationForm(target));
		}
	}
	std::cout << "Form " << name << " not found. Returning NULL." << std::endl;
	return (NULL);
}
