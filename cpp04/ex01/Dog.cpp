/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:47:52 by juramos           #+#    #+#             */
/*   Updated: 2024/06/17 16:16:41 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	this->_brain = new Brain();
}

Dog::~Dog()
{
	delete this->_brain;
}

void	Dog::makeSound() const
{
	std::cout << "I'm a dog. Guau Guau" << std::endl;
}
