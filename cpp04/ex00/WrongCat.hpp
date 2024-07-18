/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:05:32 by juramos           #+#    #+#             */
/*   Updated: 2024/07/18 15:57:55 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
					WrongCat();
					WrongCat(WrongCat const& other);
		WrongCat&	operator=(WrongCat const& other);
					~WrongCat();
		void		makeSound() const;
};

#endif