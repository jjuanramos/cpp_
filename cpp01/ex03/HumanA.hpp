/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:49:41 by juramos           #+#    #+#             */
/*   Updated: 2024/06/11 11:22:42 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon&		_w;
public:
				HumanA(std::string _name, Weapon& _w);
				~HumanA();
	void		attack();
};

#endif
