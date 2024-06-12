/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:00:06 by juramos           #+#    #+#             */
/*   Updated: 2024/06/12 11:29:09 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

class Zombie
{
private:
	std::string		_name;
public:
					Zombie();
					~Zombie();
	void			announce() const;
	void			set_name(std::string name);
};

#endif