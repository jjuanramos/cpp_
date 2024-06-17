/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:47:11 by juramos           #+#    #+#             */
/*   Updated: 2024/06/17 16:48:02 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain			*_brain;
	public:
						Dog();
						Dog(Dog const& copy);
		Dog				operator=(Dog const& other);
						~Dog();
		Brain			*getBrain() const;
		virtual void	makeSound() const;
};

#endif