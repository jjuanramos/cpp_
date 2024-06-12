/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:28:14 by juramos           #+#    #+#             */
/*   Updated: 2024/06/12 10:54:53 by juramos          ###   ########.fr       */
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
	std::map<std::string, void (Harl::*)()> func_map;
	func_map["DEBUG"] = &Harl::debug;
	func_map["INFO"] = &Harl::info;
	func_map["WARNING"] = &Harl::warning;
	func_map["ERROR"] = &Harl::error;
	Harl	h;
	std::map<std::string, void (Harl::*)()>::iterator it = func_map.find(level);
	
	if (it != func_map.end())
		(h.*(it->second))();
	else
		std::cout << "Function not found. MEC" << std::endl;
}