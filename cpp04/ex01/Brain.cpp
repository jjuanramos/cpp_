/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:56:03 by juramos           #+#    #+#             */
/*   Updated: 2024/07/24 12:26:57 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(/* args */)
{
	std::cout << "Creating Brain" << std::endl;
}

Brain::Brain(Brain const& other)
{
	std::cout << "Copy Constructor for Brain" << std::endl;
	(void)other;
}

Brain&	Brain::operator=(Brain const& other)
{
	std::cout << "Copy Assignment Operator for Brain" << std::endl;
	(void)other;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Destroying Brain" << std::endl;
}
