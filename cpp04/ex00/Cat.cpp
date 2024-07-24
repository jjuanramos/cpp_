/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:44:20 by juramos           #+#    #+#             */
/*   Updated: 2024/07/24 12:18:06 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Default constructor for Cat" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Destructor for Cat" << std::endl;
}

Cat::Cat(Cat const& other): Animal(other.getType())
{
	std::cout << "Copy constructor for Cat" << std::endl;
}

Cat&	Cat::operator=(Cat const& other)
{
	std::cout << "Copy Assignment Operator for Cat" << std::endl;
	this->type = other.getType();
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "I'm a cat. Meowwwww" << std::endl;
}
