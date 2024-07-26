/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:58:36 by juramos           #+#    #+#             */
/*   Updated: 2024/07/26 13:02:10 by juramos          ###   ########.fr       */
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
	if (this->slotsSize < 4)
	{
		this->slots[this->slotsSize] = m;
		this->slotsSize++;
	}
	else
	{
		this->thrash[this->thrashSize] = m;
		this->thrashSize++;
	}
 }

/*
	If we have 4 values:
		0, 1, 2, 3
	And the user happens to unequip idx 1, then we should:
		- Update slotsSize to 3 instead of 4
		- Move 2 and 3 to 1 and 2
	We could do that, by
		int i = idx;
		while (i < (this->slotsSize - 1))
			this->slots[i] = this->slots[i + 1];
			i++;
		this->slotsSize--;
*/
 void	Character::unequip(int idx)
 {
	if (idx  >= 0 && idx < this->slotsSize)
	{
		this->thrash[this->thrashSize] = this->slots[idx];
		this->slots[idx] = NULL;
		int	i = idx - 1;
		while (++i < (this->slotsSize - 1))
			this->slots[i] = this->slots[i + 1];
		this->thrashSize++;
		this->slotsSize--;
	}
 }

 void	Character::use(int idx, ICharacter& target)
 {
	if (idx >= 0 && idx < this->slotsSize)
		(this->slots[idx])->use(target);
 }