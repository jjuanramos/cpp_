/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:02:03 by juramos           #+#    #+#             */
/*   Updated: 2024/07/26 13:36:22 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include "Character.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string	const	_type;

public:
						AMateria(std::string const& type);
						AMateria(AMateria const& copy);
	AMateria&			operator=(AMateria const& other);
	virtual				~AMateria();
	std::string const&	getType() const;
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);
};

#endif