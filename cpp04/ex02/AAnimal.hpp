/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:40:23 by juramos           #+#    #+#             */
/*   Updated: 2024/06/17 16:56:10 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
#define AANIMAL_H

#include <iostream>

class AAnimal
{
protected:
	std::string type;
public:
						AAnimal(std::string type="Dragon");
						AAnimal(AAnimal const& copy);
	AAnimal&				operator=(AAnimal const& other);
	virtual				~AAnimal();
	virtual void		makeSound() const = 0;
	std::string			getType() const;
};

#endif
