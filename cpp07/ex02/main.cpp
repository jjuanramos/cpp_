/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:56:48 by juramos           #+#    #+#             */
/*   Updated: 2024/11/13 18:01:41 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
	Array<int> intArray(5);	
	Array<char> charArray(3);

	for (std::size_t i = 0; i < intArray.size(); ++i)
        intArray[i] = i * 2;

	charArray[0] = 'A';
	charArray[1] = 'B';
	charArray[2] = 'C';

	for (int i = 0; i < 3; i++)
		std::cout << charArray[i];

	std::cout << std::endl;
	
	for (int i = 0; i < 5; i++) 
		std::cout << intArray[i];
	
	std::cout << std::endl;

	try {
		intArray[100];
	} catch (const std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return (0);
}
 