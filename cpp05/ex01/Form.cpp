/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:16:22 by juramos           #+#    #+#             */
/*   Updated: 2024/06/28 11:47:08 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const _name, int const _signing_grade,
	int const _executing_grade):
		_name(_name), _is_signed(false), _signing_grade(_signing_grade),
		_executing_grade(_executing_grade)
{
}

Form::~Form()
{
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}


void	Form::beSigned(Bureaucrat& b)
{
	if (b.getRange() > this->getSigningGrade())
		throw Form::GradeTooLowException();
	this->_is_signed = true;
}

std::string	Form::getName() const
{
	return (this->_name);
}

bool		Form::getIsSigned() const
{
	return (this->_is_signed);
}

int			Form::getSigningGrade() const
{
	return (this->_signing_grade);
}

int			Form::getExecutingGrade() const
{
	return (this->_executing_grade);
}

std::ostream&	operator<<(std::ostream& o, Form& f)
{
	o << "Form with name " << f.getName() << ", signed: " << f.getIsSigned() << ". Signing grade equals " << f.getSigningGrade() << ", while executing grade is " << f.getExecutingGrade();
	return (o);
}