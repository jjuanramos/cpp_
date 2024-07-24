/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:42:33 by juramos           #+#    #+#             */
/*   Updated: 2024/07/24 12:20:34 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string type): type(type)
{
	std::cout << "Default constructor for WrongAnimal" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor for WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& other): type(other.getType())
{
	std::cout << "Copy constructor for WrongAnimal" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const& other)
{
	std::cout << "Copy Assignment Operator for WrongAnimal" << std::endl;
	this->type = other.getType();
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "I'm weird as fuck bro. MUUUUUU" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}
