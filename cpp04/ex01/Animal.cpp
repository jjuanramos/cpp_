/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:42:33 by juramos           #+#    #+#             */
/*   Updated: 2024/07/24 12:26:36 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(std::string type): type(type)
{
	std::cout << "Creating " << this->type << std::endl;
}

Animal::Animal(Animal const& copy): type(copy.getType())
{
	std::cout << "Copy Constructor for Animal" << std::endl;
}

Animal&	Animal::operator=(Animal const& other)
{
	std::cout << "Copy Assignment Operator for Animal" << std::endl;
	this->type = other.getType();
	return (*this);
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
