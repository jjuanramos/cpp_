/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:12:49 by juramos           #+#    #+#             */
/*   Updated: 2024/06/28 14:25:58 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
#define AFORM_H

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	std::string const	_name;
	bool				_is_signed;
	int const			_signing_grade;
	int const			_executing_grade;
public:
	AForm(std::string const _name, int const _signing_grade, int const _executing_grade);
	~AForm();
	std::string	getName() const;
	virtual 	std::string	getTarget() const = 0;
	bool		getIsSigned() const;
	int			getSigningGrade() const;
	int			getExecutingGrade() const;
	void		beSigned(Bureaucrat& b);
	virtual void	execute(Bureaucrat const& executor) const = 0;
	void		checkAndExecute(Bureaucrat const& executor) const;
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

std::ostream&	operator<<(std::ostream& o, AForm& f);

#endif
