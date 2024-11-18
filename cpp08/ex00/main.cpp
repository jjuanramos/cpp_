/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:40:05 by juramos           #+#    #+#             */
/*   Updated: 2024/11/18 17:43:21 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	std::vector<int>	v;
	for (int i = 0; i < 10; i++)
		v.push_back(i);

	std::set<int>	s;
	for (int i = 0; i < 10; i++)
		s.insert(i);

	try {
		std::vector<int>::const_iterator it_v = ::easyfind(v, 4);
		std::cout << "The element " << *it_v << " is in the vector" << std::endl;
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	try {
		std::vector<int>::const_iterator it_v = ::easyfind(v, 10);
		std::cout << "The element " << *it_v << " is in the vector" << std::endl;
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	try {
		std::set<int>::const_iterator it_s = ::easyfind(s, 1);
		std::cout << "The element " << *it_s << " is in the set" << std::endl;
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	try {
		std::set<int>::const_iterator it_s = ::easyfind(s, 10);
		std::cout << "The element " << *it_s << " is in the set" << std::endl;
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	
	return (0);
}