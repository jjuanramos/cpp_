/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:49:38 by juramos           #+#    #+#             */
/*   Updated: 2024/06/12 11:31:00 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon& _w): _name(_name), _w(_w) {}

HumanA::~HumanA() {}

void		HumanA::attack() const
{
	std::cout << this->_name <<  " attacks with their " << this->_w.getType()  << std::endl;
}