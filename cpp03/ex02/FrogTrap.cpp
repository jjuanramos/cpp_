/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FrogTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:46:49 by juramos           #+#    #+#             */
/*   Updated: 2024/06/17 11:37:17 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FrogTrap.hpp"

FrogTrap::FrogTrap(std::string _name): ClapTrap(_name, 100, 100, 30)
{
	std::cout << "Constructor for FrogTrap called!" << std::endl; 
}

FrogTrap::~FrogTrap()
{
	std::cout << "Destructor for FrogTrap called!" << std::endl;
}

void	FrogTrap::highFivesGuys()
{
	std::cout << "Let's high five dude!" << std::endl;
}
