/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:04:54 by juramos           #+#    #+#             */
/*   Updated: 2024/06/17 13:06:01 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{}

WrongCat::~WrongCat()
{}

void	WrongCat::makeSound() const
{
	std::cout << "BUDJEJADJFLJ" << std::endl;
}
