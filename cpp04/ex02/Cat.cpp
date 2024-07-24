/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:44:20 by juramos           #+#    #+#             */
/*   Updated: 2024/07/24 12:35:43 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): AAnimal("Cat")
{
	std::cout << "Default Constructor for Cat" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(Cat const& copy)
{
	std::cout << "Coopy Constructor for Cat" << std::endl;
	this->_brain = copy.getBrain()->clone();
}

Cat	Cat::operator=(Cat const& other)
{
	std::cout << "Copy Assignment Operator for Cat" << std::endl;
	this->_brain = other.getBrain()->clone();
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
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