/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:16:22 by juramos           #+#    #+#             */
/*   Updated: 2024/08/01 11:49:41 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string const _name, int const _signing_grade,
	int const _executing_grade):
		_name(_name), _is_signed(false), _signing_grade(_signing_grade),
		_executing_grade(_executing_grade)
{
}

AForm::AForm(AForm const& copy): _name(copy.getName()), _is_signed(copy.getIsSigned()),
	_signing_grade(copy.getSigningGrade()), _executing_grade(copy.getExecutingGrade())
{
}

AForm&	AForm::operator=(AForm const& other)
{
	this->_is_signed = other.getIsSigned();
	return(*this);
}

AForm::~AForm()
{
}

const char*	AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}


void	AForm::beSigned(Bureaucrat& b)
{
	if (b.getRange() > this->getSigningGrade())
		throw AForm::GradeTooLowException();
	this->_is_signed = true;
}

std::string	AForm::getName() const
{
	return (this->_name);
}

std::string	AForm::getTarget() const
{
	return (this->_name);
}

bool	AForm::getIsSigned() const
{
	return (this->_is_signed);
}

int		AForm::getSigningGrade() const
{
	return (this->_signing_grade);
}

int		AForm::getExecutingGrade() const
{
	return (this->_executing_grade);
}

std::ostream&	operator<<(std::ostream& o, AForm& f)
{
	o << "AForm with name " << f.getName() << ", signed: " << f.getIsSigned() << ". Signing grade equals " << f.getSigningGrade() << ", while executing grade is " << f.getExecutingGrade();
	return (o);
}

bool	AForm::checkAndExecute(Bureaucrat const& executor) const
{
	if (executor.getRange() > this->getExecutingGrade())
		throw AForm::GradeTooLowException();
	if (this->getIsSigned())
	{
		this->execute(executor);
		return (true);
	}
	else
	{
		std::cout << this->getName() << " has not been signed." << std::endl;
		return (false);
	}
}