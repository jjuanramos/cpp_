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
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	// const WrongAnimal* j = new Dog(); // doesn't compile
	// const Dog*	what = new Cat(); // doesn't compile
	const Dog*	ou = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrong_meta = new WrongAnimal();
	const WrongAnimal* wrong_i = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	std::cout << wrong_i->getType() << " " << std::endl;
	wrong_i->makeSound();
	j->makeSound();
	meta->makeSound();
	wrong_meta->makeSound();
	ou->makeSound();
return (0);
}