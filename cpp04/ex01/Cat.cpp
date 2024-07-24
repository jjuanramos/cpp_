/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:44:20 by juramos           #+#    #+#             */
/*   Updated: 2024/07/24 12:37:17 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Default Constructor for Cat" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(Cat const& copy): _brain(copy.getBrain())
{
	std::cout << "Copy Constructor for Cat" << std::endl;
}

Cat	Cat::operator=(Cat const& other)
{
	std::cout << "Copy Assignment Operator for Cat" << std::endl;
	this->_brain = other.getBrain();
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
