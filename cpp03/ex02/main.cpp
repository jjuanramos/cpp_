/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:25:37 by juramos           #+#    #+#             */
/*   Updated: 2024/07/18 12:55:51 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FrogTrap.hpp"

int	main()
{
	FrogTrap	c("Stone");
	FrogTrap	d("Juan");
	FrogTrap	e(d);

	d = c;
	std::cout << d.getName() << std::endl;
	std::cout << e.getName() << std::endl;
	e.attack("Whatever");
	c.attack("Scissors");
	c.takeDamage(9);
	c.beRepaired(4);
	c.takeDamage(10);
	c.attack("Paper");
	c.highFivesGuys();
	return (0);
}