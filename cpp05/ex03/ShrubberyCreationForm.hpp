/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 13:03:58 by juramos           #+#    #+#             */
/*   Updated: 2024/07/01 10:11:47 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ShrubberyCreationForm_H
#define ShrubberyCreationForm_H

#include "AForm.hpp"
#include <iostream>
#include <fstream>
#include <string>

class ShrubberyCreationForm: public AForm
{
private:
	std::string	_target;
public:
			ShrubberyCreationForm(std::string _target);
			~ShrubberyCreationForm();
	virtual	std::string getTarget() const;
	virtual	void	execute(Bureaucrat const& executor) const;
};

#endif
