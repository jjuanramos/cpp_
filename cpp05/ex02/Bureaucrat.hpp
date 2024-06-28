/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:30:21 by juramos           #+#    #+#             */
/*   Updated: 2024/06/28 13:25:19 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <stdexcept>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
private:
	std::string const	_name;
	int					_range;
public:
	Bureaucrat(std::string name, int range);
	~Bureaucrat();
	std::string	getName() const;
	int			getRange() const;
	void		signForm(AForm& f, std::string reason);
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
