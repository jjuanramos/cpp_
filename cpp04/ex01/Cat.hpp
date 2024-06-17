/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:44:27 by juramos           #+#    #+#             */
/*   Updated: 2024/06/17 16:46:37 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain			*_brain;
	public:
						Cat();
						Cat(Cat const& copy);
		Cat				operator=(Cat const& other);
						~Cat();
		Brain			*getBrain() const;
		virtual void	makeSound() const;
};

#endif