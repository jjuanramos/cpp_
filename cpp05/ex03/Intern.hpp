/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 09:40:24 by juramos           #+#    #+#             */
/*   Updated: 2024/08/01 12:19:46 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class AForm;

class Intern
{
private:
	std::string forms[3];
public:
	Intern();
	Intern(Intern const& copy);
	Intern&	operator=(Intern const& other);
	~Intern();
	AForm*	makeForm(std::string name, std::string target) const;
};


#endif