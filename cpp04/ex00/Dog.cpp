/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:47:52 by juramos           #+#    #+#             */
/*   Updated: 2024/07/18 15:55:24 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{}

Dog::~Dog()
{}

Dog::Dog(Dog const& other): Animal(other.getType())
{}

Dog&	Dog::operator=(Dog const& other)
{
	this->type = other.getType();
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "I'm a dog. Guau Guau" << std::endl;
}
