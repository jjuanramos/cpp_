/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 13:03:58 by juramos           #+#    #+#             */
/*   Updated: 2024/06/28 13:24:18 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

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
	void	shrubbery() const;
};

#endif
