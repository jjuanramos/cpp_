/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:48:21 by juramos           #+#    #+#             */
/*   Updated: 2024/06/17 16:29:40 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main()
{
	Animal	*list[100];
	Animal	*cats[50];
	Animal	*dogs[50];

	for (int i = 0; i < 50; ++i)
	{
		list[i] = new Cat();
		cats[i] = list[i];
	}
	for (int i = 50; i < 100; ++i)
	{
		list[i] = new Dog();
		dogs[i - 50] = list[i];
	}

	for (int i = 0; i < 50; ++i)
		delete cats[i];
	for (int i = 0; i < 50; ++i)
		delete dogs[i];

	return (EXIT_SUCCESS);
}
