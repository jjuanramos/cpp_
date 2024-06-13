/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 10:07:49 by juramos           #+#    #+#             */
/*   Updated: 2024/06/13 10:40:55 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
private:
	int					_value;
	static const int	_bits = 8;
public:
						Fixed();
						Fixed(Fixed const& other);
						~Fixed();
	Fixed&				operator=(Fixed const& other);
	int					getRawBits() const;
	void				setRawBits(int const raw);

};

#endif
