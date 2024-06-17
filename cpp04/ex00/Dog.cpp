/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:47:52 by juramos           #+#    #+#             */
/*   Updated: 2024/06/17 12:47:53 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{}

Dog::~Dog()
{}

void	Dog::makeSound()
{
	std::cout << "I'm a dog. Guau Guau" << std::endl;
}
