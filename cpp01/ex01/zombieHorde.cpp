/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:39:41 by juramos           #+#    #+#             */
/*   Updated: 2024/06/10 17:49:30 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int n, std::string name)
{
	Zombie	*horde = new Zombie[n];
	int		i = -1;

	while (++i < n)
		horde[i].set_name(name);
	return (&horde[0]);
}