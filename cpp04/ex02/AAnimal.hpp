/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:40:23 by juramos           #+#    #+#             */
/*   Updated: 2024/06/17 17:37:52 by juramos          ###   ########.fr       */
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
	virtual				~AAnimal();
	virtual void		makeSound() const = 0;
	virtual AAnimal		*clone() const = 0;
};

#endif
