/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:56:03 by juramos           #+#    #+#             */
/*   Updated: 2024/07/18 16:09:53 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(/* args */)
{
	std::cout << "Creating Brain" << std::endl;
}

Brain::Brain(Brain const& other)
{
	(void)other;
}

Brain&	Brain::operator=(Brain const& other)
{
	(void)other;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Destroying Brain" << std::endl;
}
