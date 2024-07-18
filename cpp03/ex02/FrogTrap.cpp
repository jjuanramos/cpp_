/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FrogTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:46:49 by juramos           #+#    #+#             */
/*   Updated: 2024/07/18 12:54:12 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FrogTrap.hpp"

FrogTrap::FrogTrap(std::string _name): ClapTrap(_name, 100, 100, 30)
{
	std::cout << "Constructor for FrogTrap called!" << std::endl; 
}


FrogTrap::FrogTrap(FrogTrap const& other): ClapTrap(other)
{
	std::cout << "Copy Constructor for FrogTrap called!" << std::endl;
}
FrogTrap&	FrogTrap::operator=(FrogTrap const& other)
{
	std::cout << "Copy Assignment Operator for FrogTrap called!" << std::endl;
	this->setName(other.getName());
	return (*this);
}

FrogTrap::~FrogTrap()
{
	std::cout << "Destructor for FrogTrap called!" << std::endl;
}

void	FrogTrap::highFivesGuys()
{
	std::cout << "Let's high five dude!" << std::endl;
}
