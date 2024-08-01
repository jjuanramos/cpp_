/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:30:21 by juramos           #+#    #+#             */
/*   Updated: 2024/08/01 11:23:03 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	std::string const	_name;
	int					_range;
public:
				Bureaucrat(std::string name, int range);
				Bureaucrat(Bureaucrat const& copy);
	Bureaucrat&	operator=(Bureaucrat const& other);
				~Bureaucrat();
	std::string	getName() const;
	int			getRange() const;
	void		signForm(Form& f, std::string reason);
	Bureaucrat&	operator++();
	Bureaucrat&	operator--();

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};

std::ostream&	operator<<(std::ostream& o, Bureaucrat const& b);

#endif
