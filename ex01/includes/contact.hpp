/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:44:34 by juramos           #+#    #+#             */
/*   Updated: 2024/06/05 11:45:38 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

#ifndef CONTACT_H
#define CONTACT_H

class Contact
{
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;

	std::string	_get_input(std::string prompt);

public:
	Contact();
	~Contact();
	
	void	init();
};

Contact::Contact()
{};

Contact::~Contact()
{};

std::string	Contact::_get_input(std::string prompt)
{
	std::string	s = "";
	bool		valid = false;

	std::cout << prompt << ": ";
	do
	{
		getline(std::cin, s);
		if (std::cin.fail() || s.empty())
		{
			std::cin.clear();
			std::cout << s << "Invalid Input. Please, try again." << std::endl;
			std::cout << "> ";
		}
		else
			valid = true;
	} while (!valid);
	return (s);
}

void	Contact::init(void)
{
	this->_first_name = this->_get_input("First name");
	this->_last_name = this->_get_input("Last name");
	this->_nickname = this->_get_input("Nick name");
	this->_phone_number = this->_get_input("Phone number");
	this->_darkest_secret = this->_get_input("Darkest Secret pls");
}


#endif
