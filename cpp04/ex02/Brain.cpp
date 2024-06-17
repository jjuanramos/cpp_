/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:56:03 by juramos           #+#    #+#             */
/*   Updated: 2024/06/17 17:39:26 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(/* args */)
{
	std::cout << "Creating Brain" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Destroying Brain" << std::endl;
}

Brain	*Brain::clone()
{
	return (new Brain(*this));
}
