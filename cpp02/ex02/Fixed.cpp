/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 10:11:06 by juramos           #+#    #+#             */
/*   Updated: 2024/07/23 13:11:38 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _value(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n): _value(n * (1 << this->_bits))
{
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const n): _value(static_cast<int>(roundf(n * (1 << this->_bits))))
{
	// std::cout << "Float constructor called"  << std::endl;
}

Fixed::Fixed(Fixed const& copy)
{
	// std::cout << "Copy constructor called" << std::endl;
	this->_value = copy.getRawBits();
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(Fixed const& other)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	this->_value = other.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+(Fixed const& other)
{
	// std::cout << "Addition assignment operator called" << std::endl;
	return (Fixed((this->toFloat() + other.toFloat())));
}

Fixed	Fixed::operator-(Fixed const& other)
{
	// std::cout << "Subtraction assignment operator called" << std::endl;
	return (Fixed((this->toFloat() - other.toFloat())));
}

Fixed	Fixed::operator*(Fixed const& other)
{
	// std::cout << "Multiplication assignment operator called" << std::endl;
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/(Fixed const& other)
{
	// std::cout << "Division assignment operator called" << std::endl;
	return (Fixed((this->toFloat() / other.toFloat())));
}

Fixed&	Fixed::operator++()
{
	// std::cout << "pre-increment assignment operator called" << std::endl;
	this->_value = this->_value + 1;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);
	// std::cout << "post-increment assignment operator called" << std::endl;
	this->_value = this->_value + 1;
	return (temp);
}

Fixed&	Fixed::operator--()
{
	// std::cout << "pre-decrement assignment operator called" << std::endl;
	this->_value = this->_value - 1;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);
	// std::cout << "post-decrement assignment operator called" << std::endl;
	this->_value = this->_value - 1;
	return (temp);
}

bool	Fixed::operator>(Fixed const& other)
{
	// std::cout << "> assignment operator called" << std::endl;
	return (this->getRawBits() > other.getRawBits());
}

bool	Fixed::operator<(Fixed const& other)
{
	// std::cout << "< assignment operator called" << std::endl;
	return (this->getRawBits() < other.getRawBits());
}

bool	Fixed::operator>=(Fixed const& other)
{
	// std::cout << ">= assignment operator called" << std::endl;
	return (this->getRawBits() >= other.getRawBits());
}

bool	Fixed::operator<=(Fixed const& other)
{
	// std::cout << "<= assignment operator called" << std::endl;
	return (this->getRawBits() <= other.getRawBits());
}

bool	Fixed::operator==(Fixed const& other)
{
	// std::cout << "== assignment operator called" << std::endl;
	return (this->getRawBits() == other.getRawBits());
}

bool	Fixed::operator!=(Fixed const& other)
{
	// std::cout << "!= assignment operator called" << std::endl;
	return (this->getRawBits() != other.getRawBits());
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


Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	return (a.getRawBits() < b.getRawBits() ? a : b);
}

const Fixed&	Fixed::min(Fixed const& a, Fixed const& b)
{
	return (a.getRawBits() < b.getRawBits() ? a : b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	return (a.getRawBits() > b.getRawBits() ? a : b);
}

const Fixed&	Fixed::max(Fixed const& a, Fixed const& b)
{
	return (a.getRawBits() > b.getRawBits() ? a : b);
}

std::ostream&	operator<<(std::ostream& o, Fixed const& other)
{
	o << other.toFloat();
	return (o);
}
