/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:42:33 by juramos           #+#    #+#             */
/*   Updated: 2024/07/24 12:35:34 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(std::string type): type(type)
{
	std::cout << "AAnimal default constructor" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor" << std::endl;
}
