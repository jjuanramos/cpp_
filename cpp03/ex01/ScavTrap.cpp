/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:46:49 by juramos           #+#    #+#             */
/*   Updated: 2024/07/18 12:53:33 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string _name): ClapTrap(_name, 100, 50, 20)
{
	std::cout << "Default constructor for ScavTrap called!" << std::endl; 
}

ScavTrap::ScavTrap(ScavTrap const &scav): ClapTrap(scav)
{
	std::cout << "Copy constructor for ScavTrap called!" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const& scav)
{
	std::cout << "Copy Assignment Operator for ScavTrap called!" << std::endl;
	this->setName(scav.getName());
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor for ScavTrap called!" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->getHitPts() <= 0 || this->getEnergyPts() == 0)
		std::cout << "No hit or energy points left. Can't attack :(" << std::endl;
	else
	{
		std::cout << "ScavTrap attacks " << target << ", causing " << this->getAtkDmg() << " points of damage!" << std::endl;
		this->setEnergyPts(this->getEnergyPts() - 1);
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->getName() << " is now on Gate keeper mode." << std::endl;
}
