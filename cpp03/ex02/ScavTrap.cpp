/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:46:49 by juramos           #+#    #+#             */
/*   Updated: 2024/06/17 11:10:43 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string _name): ClapTrap(_name, 100, 50, 20)
{
	std::cout << "Constructor for ScavTrap called!" << std::endl; 
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor for ScavTrap called!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->getName() << " is now on Gate keeper mode." << std::endl;
}
