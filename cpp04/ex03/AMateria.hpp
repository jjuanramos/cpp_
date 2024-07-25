/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:02:03 by juramos           #+#    #+#             */
/*   Updated: 2024/07/25 13:57:16 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include "Character.hpp"

class AMateria
{
protected:
	std::string			_type;

public:
						AMateria(std::string const& type);
						AMateria(AMateria const& copy);
	AMateria&			operator=(AMateria const& other);
	std::string			getType() const;
	void				setType(std::string const& type);
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);
	virtual				~AMateria();
};

#endif