/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:15:24 by juramos           #+#    #+#             */
/*   Updated: 2024/07/25 13:19:36 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include <iostream>
#include "AMateria.hpp"

class IMateriaSource
{
private:
	AMateria*	slots[4];
public:
						IMateriaSource();
						IMateriaSource(IMateriaSource const& copy);
	IMateriaSource&		operator=(IMateriaSource const& other);
	virtual 			~IMateriaSource() {}
	virtual void 		learnMateria(AMateria*) = 0;
	virtual AMateria*	createMateria(std::string const & type) = 0;
};

#endif
