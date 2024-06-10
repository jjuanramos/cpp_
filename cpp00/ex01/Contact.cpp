/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:31:04 by juramos           #+#    #+#             */
/*   Updated: 2024/06/10 16:31:30 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

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
