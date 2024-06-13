/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 10:07:49 by juramos           #+#    #+#             */
/*   Updated: 2024/06/13 17:01:23 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					_value;
	static const int	_bits = 8;
public:
						Fixed();
						Fixed(int const n);
						Fixed(float const f);
						Fixed(Fixed const& other);
						~Fixed();
	Fixed&				operator=(Fixed const& other);
	bool				operator>(Fixed const& other);
	bool				operator<(Fixed const& other);
	bool				operator>=(Fixed const& other);
	bool				operator<=(Fixed const& other);
	bool				operator==(Fixed const& other);
	bool				operator!=(Fixed const& other);
	Fixed				operator+(Fixed const& other);
	Fixed				operator-(Fixed const& other);
	Fixed				operator*(Fixed const& other);
	Fixed				operator/(Fixed const& other);
	Fixed&				operator++();
	Fixed				operator++(int);
	Fixed&				operator--();
	Fixed				operator--(int);
	int					getRawBits() const;
	void				setRawBits(int const raw);
	float				toFloat() const;
	int					toInt() const;
	static Fixed&		min(Fixed& a, Fixed& b);
	static	const Fixed& min(Fixed const& a, Fixed const& b);
	static	Fixed&		max(Fixed& a, Fixed& b);
	static	const Fixed& max(Fixed const& a, Fixed const& b);
};

std::ostream& 			operator<<(std::ostream& o, Fixed const& other);

#endif
