/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:49:25 by juramos           #+#    #+#             */
/*   Updated: 2024/07/17 11:58:35 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type): _type(_type) {}

Weapon::~Weapon() {}

std::string const&	Weapon::getType() const
{
	return (this->_type);
}

void	Weapon::setType(std::string t)
{
	this->_type = t;
}
