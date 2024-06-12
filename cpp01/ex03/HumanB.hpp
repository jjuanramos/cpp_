/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:49:35 by juramos           #+#    #+#             */
/*   Updated: 2024/06/12 11:30:46 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon*		_w;
public:
				HumanB(std::string _name);
				~HumanB();
	void		attack() const;
	void		setWeapon(Weapon& w);
};

#endif