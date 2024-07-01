/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 14:02:03 by juramos           #+#    #+#             */
/*   Updated: 2024/07/01 10:15:41 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string _target): AForm("Presidential", 25, 5), _target(_target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

std::string	PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	if (this->getIsSigned())
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	(void)executor;
}
