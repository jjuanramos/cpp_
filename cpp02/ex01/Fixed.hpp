/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 10:07:49 by juramos           #+#    #+#             */
/*   Updated: 2024/06/13 12:29:57 by juramos          ###   ########.fr       */
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
	int					getRawBits() const;
	void				setRawBits(int const raw);
	float				toFloat() const;
	int					toInt() const;
};

std::ostream& 			operator<<(std::ostream& o, Fixed const& other);

#endif
