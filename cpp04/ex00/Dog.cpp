/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:47:52 by juramos           #+#    #+#             */
/*   Updated: 2024/07/24 12:19:22 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Default constructor for Dog" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Destructor for Dog" << std::endl;
}

Dog::Dog(Dog const& other): Animal(other.getType())
{
	std::cout << "Copy Constructor for Dog" << std::endl;
}

Dog&	Dog::operator=(Dog const& other)
{
	std::cout << "Copy Assignment Operator for Dog" << std::endl;
	this->type = other.getType();
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "I'm a dog. Guau Guau" << std::endl;
}
