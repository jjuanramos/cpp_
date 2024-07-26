/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:58:36 by juramos           #+#    #+#             */
/*   Updated: 2024/07/26 12:23:16 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const& name): name(name), slotsSize(0), thrashSize(0)
{
}

Character::Character(Character const& copy): name(copy.getName())
{
	if (this->slotsSize > 0)
	{
		int i = -1;
		while (++i < this->slotsSize)
			delete this->slots[i];
	}
	int	i = -1;
	while (++i < copy.slotsSize)
		this->slots[i] = (copy.slots[i])->clone();
}

Character&	Character::operator=(Character const& other)
{
	this->name = other.getName();
	if (this->slotsSize > 0)
	{
		int i = -1;
		while (++i < this->slotsSize)
			delete this->slots[i];
	}
	int i = -1;
	while (++i < other.slotsSize)
		this->slots[i] = (other.slots[i])->clone();
	return (*this);
}

Character::~Character()
{
	if (this->slotsSize > 0)
	{
		int i = -1;
		while (++i < this->slotsSize)
			delete this->slots[i];
	}
	if (this->thrashSize > 0)
	{
		int i = -1;
		while (++i < this->thrashSize)
			delete this->thrash[i];
	}
}

 std::string const& Character::getName() const
 {
	return (this->name);
 }

 void	Character::equip(AMateria* m)
 {
	if (this->slotsSize < 3)
	{
		this->slots[this->slotsSize] = m;
		this->slotsSize++;
	}
 }

 void	Character::unequip(int idx)
 {
	if (idx >= 0 && idx < 4 && this->slots[idx])
	{
		this->thrash[this->thrashSize] = this->slots[idx];
		this->slots[idx] = NULL;
		this->thrashSize++;
	}
 }

 void	Character::use(int idx, ICharacter& target)
 {
	if (idx >= 0 && idx < 4 && this->slots[idx])
		(this->slots[idx])->use(target);
 }