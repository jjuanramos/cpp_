/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:04:12 by juramos           #+#    #+#             */
/*   Updated: 2024/07/18 15:56:20 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal
{
protected:
	std::string type;
public:
					WrongAnimal(std::string type="Dragon");
					WrongAnimal(WrongAnimal const& other);
	WrongAnimal&	operator=(WrongAnimal const& other);
					~WrongAnimal();
	void			makeSound() const;
	std::string		getType() const;
};

#endif