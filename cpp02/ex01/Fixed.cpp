/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 10:11:06 by juramos           #+#    #+#             */
/*   Updated: 2024/07/18 11:38:47 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n): _value(n * (1 << this->_bits))
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const n): _value(static_cast<int>(roundf(n * (1 << this->_bits))))
{
	std::cout << "Float constructor called"  << std::endl;
}

Fixed::Fixed(Fixed const& copy): _value(copy.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(Fixed const& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = other.getRawBits();
	return (*this);
}

float	Fixed::toFloat( void ) const
{
	return (static_cast<float>(this->_value) / (1 << this->_bits));
}


int	Fixed::toInt( void ) const
{
	return (this->_value / (1 << this->_bits));
}

int	Fixed::getRawBits() const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

std::ostream&	operator<<(std::ostream& o, Fixed const& other)
{
	o << other.toFloat();
	return (o);
}
