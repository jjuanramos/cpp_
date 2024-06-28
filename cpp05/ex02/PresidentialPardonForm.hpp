/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 13:59:24 by juramos           #+#    #+#             */
/*   Updated: 2024/06/28 14:21:47 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

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