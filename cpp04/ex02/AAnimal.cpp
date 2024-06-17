/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:42:33 by juramos           #+#    #+#             */
/*   Updated: 2024/06/17 16:54:34 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(std::string type): type(type)
{
	std::cout << "Creating " << this->type << std::endl;
}

AAnimal::AAnimal(AAnimal const& copy)
{
	this->type = copy.getType();
}

AAnimal&	AAnimal::operator=(AAnimal const& other)
{
	this->type = other.getType();
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "Destroying " << this->type << std::endl;
}

void	AAnimal::makeSound() const
{
	std::cout << "I'm a regular " << this->getType() << ", Beeeee" << std::endl;
}

std::string	AAnimal::getType() const
{
	return (this->type);
}
