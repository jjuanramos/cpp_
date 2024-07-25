/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:50:33 by juramos           #+#    #+#             */
/*   Updated: 2024/07/25 13:57:55 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const& type): _type(type)
{

}

AMateria::AMateria(AMateria const& copy): _type(copy.getType())
{

}

AMateria::~AMateria()
{
	
}

AMateria&	AMateria::operator=(AMateria const& other)
{
	this->setType(other.getType());
	return (*this);
}

std::string	AMateria::getType() const
{
	return (this->_type);
}

void	AMateria::setType(std::string const& type)
{
	this->_type = type;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "AMateria " << this->getType() << " being used on " << target.getName() << std::endl;
}