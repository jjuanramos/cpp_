/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:47:52 by juramos           #+#    #+#             */
/*   Updated: 2024/06/17 17:40:40 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): AAnimal("Dog")
{
	this->_brain = new Brain();
}

Dog::Dog(Dog const& copy)
{
	this->_brain = copy.getBrain()->clone();
}

Dog	Dog::operator=(Dog const& other)
{
	this->_brain = other.getBrain()->clone();
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

Dog	*Dog::clone() const
{
	return (new Dog(*this));
}