/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:39:25 by juramos           #+#    #+#             */
/*   Updated: 2024/08/01 11:40:33 by juramos          ###   ########.fr       */
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

Bureaucrat::Bureaucrat(Bureaucrat const& copy): _name(copy.getName()), _range(copy.getRange())
{}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const& other)
{
	this->_range = other.getRange();
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

void	Bureaucrat::signForm(Form& f)
{
	try
	{
		f.beSigned(*this);
		std::cout << this->getName() << " signed " << f.getName() << std::endl;
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cerr << this->getName() << " couldn't sign " << f.getName() << " because " << e.what() << std::endl;
	}
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

std::ostream&	operator<<(std::ostream& o, Bureaucrat const& b) {
	o << b.getName() << ", bureaucrat grade " << b.getRange() << ".";
	return (o);
}
