/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 13:59:24 by juramos           #+#    #+#             */
/*   Updated: 2024/07/01 10:11:39 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PresidentialPardonForm_H
#define PresidentialPardonForm_H

#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
private:
	std::string	_target;
public:
	PresidentialPardonForm(std::string _target);
	~PresidentialPardonForm();
	virtual std::string	getTarget() const;
	virtual	void	execute(Bureaucrat const& executor) const;
};

#endif