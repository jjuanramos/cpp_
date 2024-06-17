/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:42:33 by juramos           #+#    #+#             */
/*   Updated: 2024/06/17 16:32:23 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(std::string type): type(type)
{
	std::cout << "Creating " << this->type << std::endl;
}

Animal::~Animal()
{
	std::cout << "Destroying " << this->type << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "I'm a regular " << this->getType() << ", Beeeee" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}
