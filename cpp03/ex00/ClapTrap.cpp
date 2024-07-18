/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:16:52 by juramos           #+#    #+#             */
/*   Updated: 2024/07/18 11:52:16 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hit_pts(10), _energy_pts(10), _atk_dmg(0)
{
	std::cout << "Constructor for ClapTrap called!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& copy): _name(copy.getName())
{
	std::cout << "Copy Constructor for ClapTrap called!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor for ClapTrap called!" << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const& other)
{
	std::cout << "Copy assignment operator for ClapTrap called" << std::endl;
	this->_name = other.getName();
	return (*this);
}

std::string	ClapTrap::getName() const
{
	return (this->_name);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hit_pts <= 0 || this->_energy_pts == 0)
		std::cout << "No hit or energy points left. " << this->getName() << " can't attack :(" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->_atk_dmg << " points of damage!" << std::endl;
		this->_energy_pts--;
	}
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hit_pts -= amount;	
	std::cout << "ClapTrap " << this->_name << " took " << amount << " points of damage. Hit points left: " << this->_hit_pts << std::endl;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_pts <= 0 || this->_energy_pts == 0)
		std::cout << "No hit or energy points left. Can't be repaired :(" << std::endl;
	else
	{
		this->_hit_pts += amount;
		this->_energy_pts--;
		std::cout << "ClapTrap " << this->_name << " gets " << amount << " of hit points back. Hit points left: " << this->_hit_pts << std::endl;
	}
}
