/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:25:37 by juramos           #+#    #+#             */
/*   Updated: 2024/07/18 12:51:37 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	c("Stone");
	ScavTrap	d("Carlos");
	
	d = c;
	c.attack("Scissors");
	d.attack("Charles");
	std::cout << d.getName() << std::endl;
	c.takeDamage(9);
	c.beRepaired(4);
	c.takeDamage(10);
	c.guardGate();
	c.attack("Paper");
	return (0);
}