/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:50:40 by juramos           #+#    #+#             */
/*   Updated: 2024/07/18 12:30:06 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
					ScavTrap(std::string _name);
					ScavTrap(ScavTrap const& scav);
					~ScavTrap();
	virtual void	attack(const std::string& target);
	void			guardGate();
};

#endif