/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:44:20 by juramos           #+#    #+#             */
/*   Updated: 2024/06/17 17:40:26 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): AAnimal("Cat")
{
	this->_brain = new Brain();
}

Cat::Cat(Cat const& copy)
{
	this->_brain = copy.getBrain()->clone();
}

Cat	Cat::operator=(Cat const& other)
{
	this->_brain = other.getBrain()->clone();
	return (*this);
}

Cat::~Cat()
{
	delete this->_brain;
}

Brain	*Cat::getBrain() const
{
	return (this->_brain);
}

void	Cat::makeSound() const
{
	std::cout << "I'm a cat. Meowwwww" << std::endl;
}

Cat	*Cat::clone() const
{
	return (new Cat(*this));
}