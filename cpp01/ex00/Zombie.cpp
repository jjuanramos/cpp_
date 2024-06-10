/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:59:55 by juramos           #+#    #+#             */
/*   Updated: 2024/06/10 17:19:41 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << this->_name << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
