/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:42:33 by juramos           #+#    #+#             */
/*   Updated: 2024/06/17 12:54:27 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Dragon")
{}

Animal::Animal(std::string type): type(type)
{}

Animal::~Animal()
{}

void	Animal::makeSound()
{
	std::cout << "I'm a regular " << this->type << ", Beeeee" << std::endl;
}
