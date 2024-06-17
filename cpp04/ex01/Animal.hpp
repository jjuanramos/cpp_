/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:40:23 by juramos           #+#    #+#             */
/*   Updated: 2024/06/17 16:38:04 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
protected:
	std::string type;
public:
						Animal(std::string type="Dragon");
						Animal(Animal const& copy);
	Animal&				operator=(Animal const& other);
	virtual				~Animal();
	virtual void		makeSound() const;
	std::string			getType() const;
};

#endif
