/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:04:54 by juramos           #+#    #+#             */
/*   Updated: 2024/07/24 12:21:58 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "Default constructor for WrongCat" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor for WrongCat" << std::endl;
}

WrongCat::WrongCat(WrongCat const& other): WrongAnimal(other.getType())
{
	std::cout << "Copy constructor for WrongCat" << std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat const& other)
{
	std::cout << "Copy Assignment Operator for WrongCat" << std::endl;
	this->type = other.getType();
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "BUDJEJADJFLJ" << std::endl;
}
