/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 13:03:58 by juramos           #+#    #+#             */
/*   Updated: 2024/08/01 12:26:01 by juramos          ###   ########.fr       */
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
	virtual	~ShrubberyCreationForm();
	virtual	std::string getTarget() const;
	virtual	void	run() const;
};

#endif
