/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:06:33 by juramos           #+#    #+#             */
/*   Updated: 2024/07/26 12:21:26 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include "AMateria.hpp"

class AMateria;

class ICharacter
{
public:
	virtual 					~ICharacter() {}
	virtual std::string const& getName() const = 0;
	virtual void 				equip(AMateria* m) = 0;
	virtual void 				unequip(int idx) = 0;
	virtual void 				use(int idx, ICharacter& target) = 0;
};

class Character: public ICharacter
{
private:
	AMateria*					slots[4];
	AMateria*					thrash[100];
	std::string					name;
	int							slotsSize;
	int							thrashSize;
public:
								Character(std::string const& name);
								Character(Character const& copy);
	Character&					operator=(Character const& other);
	virtual 					~Character();
	virtual std::string const& getName() const;
	virtual void 				equip(AMateria* m);
	virtual void 				unequip(int idx);
	virtual void 				use(int idx, ICharacter& target);
};

#endif
