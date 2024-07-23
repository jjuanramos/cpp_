/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 11:34:40 by juramos           #+#    #+#             */
/*   Updated: 2024/07/23 13:11:13 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << "is " << a << " smaller than " << b << "?: " << (a < b) << std::endl;
	std::cout << "is " << a << " greater than " << b << "?: " << (a > b) << std::endl;
	std::cout << "is " << a << " different of " << b << "?: " << (a != b) << std::endl;
	std::cout <<  a << " divided by " << b << " is " << (a / b) << std::endl;
	std::cout <<  a << " minus " << b << " is " << (a - b) << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	return (0);
}

