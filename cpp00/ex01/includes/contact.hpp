/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:44:34 by juramos           #+#    #+#             */
/*   Updated: 2024/06/05 14:04:08 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

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
	
	void		init();
	std::string	get_first_name() const;
	std::string	get_last_name() const;
	std::string	get_nickname() const;
	std::string	get_phone_number() const;
	std::string	get_darkest_secret() const;
};

Contact::Contact()
{};

Contact::~Contact()
{};

std::string	Contact::_get_input(std::string prompt)
{
	std::string	s = "";
	bool		valid = false;

	do
	{
		std::cout << prompt << ": ";
		getline(std::cin, s);
		if (std::cin.fail() || s.empty()
			|| (!prompt.compare("Phone number") &&
				s.find_first_not_of("0123456789") != std::string::npos))
		{
			std::cin.clear();
			std::cout << "Invalid Input. Please, try again." << std::endl;
		}
		else
			valid = true;
	} while (!valid);
	return (s);
}

std::string	Contact::get_first_name() const
{
	return (this->_first_name);
};

std::string	Contact::get_last_name() const
{
	return (this->_last_name);
};

std::string	Contact::get_nickname() const
{
	return (this->_nickname);
};

std::string	Contact::get_phone_number() const
{
	return (this->_phone_number);
};

std::string	Contact::get_darkest_secret() const
{
	return (this->_darkest_secret);
};

void	Contact::init(void)
{
	this->_first_name = this->_get_input("First name");
	this->_last_name = this->_get_input("Last name");
	this->_nickname = this->_get_input("Nick name");
	this->_phone_number = this->_get_input("Phone number");
	this->_darkest_secret = this->_get_input("Darkest Secret pls");
}


#endif
