/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 13:59:24 by juramos           #+#    #+#             */
/*   Updated: 2024/08/01 12:25:52 by juramos          ###   ########.fr       */
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
	virtual	~PresidentialPardonForm();
	virtual std::string	getTarget() const;
	virtual	void	run() const;
};

#endif