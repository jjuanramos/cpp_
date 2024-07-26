/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:15:24 by juramos           #+#    #+#             */
/*   Updated: 2024/07/26 12:55:51 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include <iostream>
#include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual 			~IMateriaSource() {}
	virtual void 		learnMateria(AMateria* mat) = 0;
	virtual AMateria*	createMateria(std::string const& type) = 0;
};

class MateriaSource: public IMateriaSource
{
private:
	AMateria*	slots[4];
	AMateria*	thrash[100];
	int			slotsSize;
	int			thrashSize;
	
public:
						MateriaSource();
						MateriaSource(MateriaSource const& copy);
	MateriaSource&		operator=(MateriaSource const& other);
	virtual 			~MateriaSource();
	virtual void 		learnMateria(AMateria* mat);
	virtual AMateria*	createMateria(std::string const& type);
};

#endif
