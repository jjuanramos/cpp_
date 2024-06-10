/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:01:33 by juramos           #+#    #+#             */
/*   Updated: 2024/06/10 17:50:29 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "zombieHorde.cpp"

int	main(void)
{
	Zombie	*horde = zombieHorde(10, "Juan");
	int		i = -1;

	while (++i < 10)
		horde[i].announce();

	delete [] horde;
	return (EXIT_SUCCESS);
}