/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:47:52 by juramos           #+#    #+#             */
/*   Updated: 2024/07/24 12:30:30 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Default Constructor for Dog" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(Dog const& copy): _brain(copy.getBrain())
{
	std::cout << "Copy Constructor for Dog" << std::endl;
}

Dog	Dog::operator=(Dog const& other)
{
	std::cout << "Copy Assignment Operator for Dog" << std::endl;
	this->_brain = other.getBrain();
	return (*this);
}

Dog::~Dog()
{
	delete this->_brain;
}

Brain	*Dog::getBrain() const
{
	return (this->_brain);
}

void	Dog::makeSound() const
{
	std::cout << "I'm a dog. Guau Guau" << std::endl;
}
