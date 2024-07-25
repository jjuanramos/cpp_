/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:58:36 by juramos           #+#    #+#             */
/*   Updated: 2024/07/25 14:07:03 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

ICharacter::ICharacter(std::string const& name): name(name)
{
}

ICharacter::ICharacter(ICharacter const& copy): name(copy.getName())
{
}

ICharacter&	ICharacter::operator=(ICharacter const& other)
{
	this->name = other.getName();
	if (this->slots)
		delete [] this->slots;
	unsigned int i = -1;
	while (++i < slotsSize)
		this->slots[i] = other.slots[i].clone();
	return (*this);
}
