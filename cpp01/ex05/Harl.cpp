/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:28:14 by juramos           #+#    #+#             */
/*   Updated: 2024/07/17 11:50:49 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	const	func_map[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	Harl				h;
	int					val = -1;

	while (++val < 4)
	{
		if (!func_map[val].compare(level))
			break ;
	}
	switch (val)
	{
	case 0:
		h.debug();
		break;
	case 1:
		h.info();
		break;
	case 2:
		h.warning();
		break;
	case 3:
		h.error();
		break;
	default:
		std::cout << "Function not found. MEC" << std::endl;
		break;
	}
}