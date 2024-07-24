/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:42:33 by juramos           #+#    #+#             */
/*   Updated: 2024/07/24 12:17:02 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(std::string type): type(type)
{
	std::cout << "Default constructor for Animal" << std::endl;
}

Animal::Animal(Animal const& other): type(other.getType())
{
	std::cout << "Copy constructor for Animal" << std::endl;
}
Animal&	Animal::operator=(Animal const& other)
{
	std::cout << "Copy Assignment Operaator for Animal" << std::endl;
	this->type = other.getType();
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Destructor for Animal" << std::endl;}

void	Animal::makeSound() const
{
	std::cout << "I'm a regular " << this->getType() << ", Beeeee" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}
