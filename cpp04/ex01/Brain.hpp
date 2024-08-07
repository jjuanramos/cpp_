/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:54:30 by juramos           #+#    #+#             */
/*   Updated: 2024/07/18 16:04:19 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain
{
private:
	std::string	ideas[100];
public:
				Brain();
				Brain(Brain const& other);
	Brain&		operator=(Brain const& other);
				~Brain();
};

#endif