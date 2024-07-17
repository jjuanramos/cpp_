/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:26:19 by juramos           #+#    #+#             */
/*   Updated: 2024/07/17 11:44:51 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <iostream>

class Harl
{
private:
	void	debug();
	void	info();
	void	warning();
	void	error();
public:
			Harl();
			~Harl();
	void	complain(std::string level);
};

#endif