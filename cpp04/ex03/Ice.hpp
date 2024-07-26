/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 10:48:30 by juramos           #+#    #+#             */
/*   Updated: 2024/07/26 12:19:10 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"

class Ice: public AMateria
{
public:
					Ice();
					~Ice();
	virtual Ice*	clone() const;
	virtual void	use(ICharacter& target);
};

#endif
