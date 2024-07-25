/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:06:33 by juramos           #+#    #+#             */
/*   Updated: 2024/07/25 14:05:35 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include "AMateria.hpp"

class ICharacter
{
private:
	AMateria*					slots[4];
	unsigned int				slotsSize;
	std::string					name;
public:
								ICharacter(std::string const& name);
								ICharacter(ICharacter const& copy);
	ICharacter&					operator=(ICharacter const& other);
	virtual 					~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void 				equip(AMateria* m) = 0;
	virtual void 				unequip(int idx) = 0;
	virtual void 				use(int idx, ICharacter& target) = 0;
};

#endif