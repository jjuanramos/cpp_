/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:42:33 by juramos           #+#    #+#             */
/*   Updated: 2024/07/18 15:51:19 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(std::string type): type(type)
{}

Animal::Animal(Animal const& other): type(other.getType())
{
	
}
Animal&	Animal::operator=(Animal const& other)
{
	this->type = other.getType();
	return (*this);
}

Animal::~Animal()
{}

void	Animal::makeSound() const
{
	std::cout << "I'm a regular " << this->getType() << ", Beeeee" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}
