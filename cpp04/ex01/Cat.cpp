/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:44:20 by juramos           #+#    #+#             */
/*   Updated: 2024/06/17 16:32:06 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	this->_brain = new Brain();
}

Cat::~Cat()
{
	delete this->_brain;
}

void	Cat::makeSound() const
{
	std::cout << "I'm a cat. Meowwwww" << std::endl;
}
