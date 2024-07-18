/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:14:05 by juramos           #+#    #+#             */
/*   Updated: 2024/07/18 11:48:27 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
private:
	std::string	_name;
	int			_hit_pts;
	int			_energy_pts;
	int			_atk_dmg;
				ClapTrap();
public:
				ClapTrap(std::string name);
				ClapTrap(ClapTrap const& copy);
				~ClapTrap();
	ClapTrap&	operator=(ClapTrap const& other);
	void		attack(const std::string& target);
	std::string	getName() const;
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif
