/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:49:22 by juramos           #+#    #+#             */
/*   Updated: 2024/06/11 11:18:04 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon
{
private:
	std::string		_type;
public:
	Weapon(std::string _type);
	~Weapon();
	std::string&	getType();
	void			setType(std::string t);
};

#endif
