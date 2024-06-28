/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 14:09:49 by juramos           #+#    #+#             */
/*   Updated: 2024/06/28 14:29:37 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string _target): AForm("Robotomy", 72, 45), _target(_target)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

std::string	RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	int	is_robotomized = std::rand() % 2;
	if (is_robotomized)
		std::cout << this->getTarget() << " has been robotomized successfully." << std::endl;
	else
		std::cout << "Robotomy has failed." << std::endl;
	(void)executor;
}