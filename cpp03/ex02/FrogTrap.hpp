/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FrogTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 11:34:52 by juramos           #+#    #+#             */
/*   Updated: 2024/06/17 11:36:26 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FROGTRAP_H
#define FROGTRAP_H

#include "ClapTrap.hpp"

class FrogTrap: public ClapTrap
{
public:
			FrogTrap(std::string _name);
			~FrogTrap();
	void	highFivesGuys();
};

#endif