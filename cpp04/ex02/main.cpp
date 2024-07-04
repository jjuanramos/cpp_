/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:48:21 by juramos           #+#    #+#             */
/*   Updated: 2024/07/04 11:46:01 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "AAnimal.hpp"

void	test_deep_copy(AAnimal *value)
{
	AAnimal	*copy = value->clone();
	value->makeSound();
	copy->makeSound();

	delete copy;
}

int main()
{
	AAnimal	*list[100];

	for (int i = 0; i < 50; ++i)
		list[i] = new Cat();
	for (int i = 50; i < 100; ++i)
		list[i] = new Dog();

	for (int i = 0; i < 100; ++i)
		test_deep_copy(list[i]);

	for (int i = 0; i < 100; ++i)
		delete list[i];

	return (0);
}
