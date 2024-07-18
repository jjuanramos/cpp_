/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:04:54 by juramos           #+#    #+#             */
/*   Updated: 2024/07/18 15:59:04 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{}

WrongCat::~WrongCat()
{}

WrongCat::WrongCat(WrongCat const& other): WrongAnimal(other.getType())
{}

WrongCat&	WrongCat::operator=(WrongCat const& other)
{
	this->type = other.getType();
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "BUDJEJADJFLJ" << std::endl;
}
