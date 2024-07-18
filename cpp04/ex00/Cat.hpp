/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:44:27 by juramos           #+#    #+#             */
/*   Updated: 2024/07/18 16:01:09 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat: public Animal
{
	public:
						Cat();
		virtual			~Cat();
						Cat(Cat const& other);
		Cat&			operator=(Cat const& other);
		virtual void	makeSound() const;
};

#endif