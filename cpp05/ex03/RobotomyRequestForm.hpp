/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 14:07:49 by juramos           #+#    #+#             */
/*   Updated: 2024/07/01 10:11:29 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RobotomyRequestForm_H
#define RobotomyRequestForm_H

#include "AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm: public AForm
{
private:
	std::string	_target;
public:
	RobotomyRequestForm(std::string _target);
	~RobotomyRequestForm();
	virtual std::string getTarget() const;
	virtual	void	execute(Bureaucrat const& executor) const;
};

#endif
