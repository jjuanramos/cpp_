/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:25:37 by juramos           #+#    #+#             */
/*   Updated: 2024/06/17 11:11:16 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	c("Stone");

	c.attack("Scissors");
	c.takeDamage(9);
	c.beRepaired(4);
	c.takeDamage(10);
	c.guardGate();
	c.attack("Paper");
	return (EXIT_SUCCESS);
}