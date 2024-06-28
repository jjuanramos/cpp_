/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:39:25 by juramos           #+#    #+#             */
/*   Updated: 2024/06/28 14:43:33 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int range): _name(name), _range(range)
{
	if (_range > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (_range < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::~Bureaucrat()
{
}

void	Bureaucrat::signForm(AForm& f, std::string reason)
{
	if (f.getIsSigned())
		std::cout << this->getName() << " signed " << f.getName() << std::endl;
	else
		std::cout << this->getName() << " couldn't sign " << f.getName() << " because " << reason << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade too high, can't get greater than zero");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade too low, can't get lower than hundred fifty");
}

std::string	Bureaucrat::getName() const {
	return (this->_name);
}

int	Bureaucrat::getRange() const {
	return (this->_range);
}

Bureaucrat&	Bureaucrat::operator++() {
	this->_range--;
	if (this->_range < 1)
		throw Bureaucrat::GradeTooHighException();
	return (*this);
}

Bureaucrat&	Bureaucrat::operator--() {
	this->_range++;
	if (this->_range > 150)
		throw Bureaucrat::GradeTooLowException();
	return (*this);
}

void	Bureaucrat::executeForm(AForm const& form) const
{
	try
	{
		if (form.checkAndExecute(*this))
			std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch (AForm::GradeTooLowException& e)
	{
		std::cout << e.what() << " for bureaucrat " << this->getName() << std::endl;
	}
}

std::ostream&	operator<<(std::ostream& o, Bureaucrat const& b) {
	o << b.getName() << ", bureaucrat grade " << b.getRange() << ".";
	return (o);
}
