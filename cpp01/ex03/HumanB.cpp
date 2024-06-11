/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:49:32 by juramos           #+#    #+#             */
/*   Updated: 2024/06/11 11:28:58 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name): _name(_name) {}

HumanB::~HumanB() {}

void		HumanB::setWeapon(Weapon& w)
{
	this->_w = &w;
}

void		HumanB::attack()
{
	std::cout << this->_name <<  " attacks with their " << this->_w->getType()  << std::endl;
}