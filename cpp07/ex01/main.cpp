/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:55:15 by juramos           #+#    #+#             */
/*   Updated: 2024/11/13 12:55:22 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void printElement(const T &element) {
	std::cout << element << std::endl;
}

int main() {
	int i[] = {0, 1, 2};
	std::string s[] = {"Hello", "World"};

	::iter(i, 3, printElement);
	::iter(s, 2, printElement);

	return (0);
}