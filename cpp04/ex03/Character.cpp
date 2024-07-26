/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:58:36 by juramos           #+#    #+#             */
/*   Updated: 2024/07/26 11:15:43 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

ICharacter::ICharacter(std::string const& name): name(name), slotsSize(0), thrashSize(0)
{
}

ICharacter::ICharacter(ICharacter const& copy): name(copy.getName())
{
	if (this->slots)
		delete [] this->slots;
	int	i = -1;
	while (++i < copy.slotsSize)
		this->slots[i] = (copy.slots[i])->clone();
}

ICharacter&	ICharacter::operator=(ICharacter const& other)
{
	this->name = other.getName();
	if (this->slots)
		delete [] this->slots;
	int i = -1;
	while (++i < other.slotsSize)
		this->slots[i] = (other.slots[i])->clone();
	return (*this);
}

ICharacter::~ICharacter()
{
	delete [] this->slots;
	delete [] this->thrash;
}

 std::string const& ICharacter::getName() const
 {
	return (this->name);
 }

 void	ICharacter::equip(AMateria* m)
 {
	if (this->slotsSize < 3)
	{
		this->slots[this->slotsSize] = m;
		this->slotsSize++;
	}
 }

 void	ICharacter::unequip(int idx)
 {
	if (idx >= 0 && idx < 4 && this->slots[idx])
	{
		this->thrash[this->thrashSize] = this->slots[idx];
		this->slots[idx] = NULL;
		this->thrashSize++;
	}
 }

 void	ICharacter::use(int idx, ICharacter& target)
 {
	if (idx >= 0 && idx < 4 && this->slots[idx])
		(this->slots[idx])->use(target);
 }