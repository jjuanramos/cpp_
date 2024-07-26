/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 11:26:41 by juramos           #+#    #+#             */
/*   Updated: 2024/07/26 12:25:56 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): slotsSize(0)
{}
MateriaSource::MateriaSource(MateriaSource const& copy)
{
	if (this->slotsSize > 0)
	{
		int i = -1;
		while (++i < this->slotsSize)
			delete this->slots[i];
	}
	int	i = -1;
	while (++i < copy.slotsSize)
		this->slots[i] = copy.slots[i]->clone();
}
MateriaSource&		MateriaSource::operator=(MateriaSource const& other)
{
	if (this->slotsSize > 0)
	{
		int i = -1;
		while (++i < this->slotsSize)
			delete this->slots[i];
	}
	int	i = -1;
	while (++i < other.slotsSize)
		this->slots[i] = other.slots[i]->clone();
	return (*this);
}
MateriaSource::~MateriaSource()
{
	if (this->slotsSize > 0)
	{
		int i = -1;
		while (++i < this->slotsSize)
			delete this->slots[i];
	}
}
void 		MateriaSource::learnMateria(AMateria* mat)
{
	if (this->slotsSize < 3)
	{
		this->slots[this->slotsSize] = mat;
		this->slotsSize++;
	}
}
AMateria*	MateriaSource::createMateria(std::string const & type)
{
	int	i = -1;
	while (++i < this->slotsSize)
	{
		if (!(this->slots[i]->getType().compare(type)))
			return (this->slots[i]->clone());
	}
	return (0);
}