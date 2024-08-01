/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:12:49 by juramos           #+#    #+#             */
/*   Updated: 2024/08/01 11:43:41 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string const	_name;
	bool				_is_signed;
	int const			_signing_grade;
	int const			_executing_grade;
public:
				Form(std::string const _name, int const _signing_grade, int const _executing_grade);
				Form(Form const& copy);
	Form&		operator=(Form const& other);
				~Form();
	std::string	getName() const;
	bool		getIsSigned() const;
	int			getSigningGrade() const;
	int			getExecutingGrade() const;
	void		beSigned(Bureaucrat& b);

	class 		GradeTooHighException : public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};

	class 		GradeTooLowException : public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};
};

std::ostream&	operator<<(std::ostream& o, Form& f);

#endif
