/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:42:33 by juramos           #+#    #+#             */
/*   Updated: 2024/07/18 15:57:16 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string type): type(type)
{}

WrongAnimal::~WrongAnimal()
{}

WrongAnimal::WrongAnimal(WrongAnimal const& other): type(other.getType())
{}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const& other)
{
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
