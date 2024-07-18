/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:47:11 by juramos           #+#    #+#             */
/*   Updated: 2024/07/18 15:54:26 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog: public Animal
{
	public:
						Dog();
						~Dog();
						Dog(Dog const& other);
		Dog&			operator=(Dog const& other);
		virtual void	makeSound() const;
};

#endif