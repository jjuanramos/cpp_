/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:47:11 by juramos           #+#    #+#             */
/*   Updated: 2024/06/17 17:34:08 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
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
		virtual Dog		*clone() const;
};

#endif