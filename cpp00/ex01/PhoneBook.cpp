/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:30:23 by juramos           #+#    #+#             */
/*   Updated: 2024/06/11 11:07:59 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(): _n_indexes(0) {}

PhoneBook::~PhoneBook()
{};

Contact	PhoneBook::_get_contact(int n) const
{
	return (this->_contacts[n]);
}

void	PhoneBook::_display_info(std::string elem) const
{
	size_t	elem_len = 0;
	size_t	distance = 0;

	elem_len = elem.length();
	if (elem_len <= 10)
	{
		distance = 10 - elem_len;
		while (distance--)
			std::cout << " ";
		std::cout << elem;
	}
	else
		std::cout << elem.substr(0, 9) << ".";
	std::cout << "|";
}

void	PhoneBook::_display_contacts() const
{
	int					i = 0;
	std::stringstream 	s;
	Contact				c;

	while (i < this->_n_indexes)
	{
		std::cout << "|";
		s << (i + 1);
		if (s.str().length() == 1)
			this->_display_info(s.str());
		else
			this->_display_info(s.str().substr(1, 1));
		c = this->_get_contact(i);
		this->_display_info(c.get_first_name());
		this->_display_info(c.get_last_name());
		this->_display_info(c.get_nickname());
		std::cout << std::endl;
		i++;
	}
}

void	PhoneBook::_display_contact(int n) const
{
	Contact	c;

	c = this->_get_contact(n);
	std::cout << c.get_first_name() << "\n";
	std::cout << c.get_last_name() << "\n";
	std::cout << c.get_nickname() << "\n";
	std::cout << c.get_phone_number() << "\n";
	std::cout << c.get_darkest_secret() << std::endl;
}

void	PhoneBook::welcome() const
{
	std::cout << "<----- 📞 Welcome to Phone Book CPP00 📞 ----->" << std::endl;
	std::cout << "You've got 3 options available:" << std::endl;
	std::cout << "ADD:\tAdd a new contact" << std::endl;
	std::cout << "SEARCH:\tSearch an existing contact" << std::endl;
	std::cout << "EXIT:\tExit Phone Book CPP00" << std::endl;
}

void	PhoneBook::add_contact()
{
	Contact			c;
	static size_t	i = 0;

	if (i == 8)
		i = 0;
	else
		this->_n_indexes++;
	c.init();
	this->_contacts[i] = c;
	i++;
}

void	PhoneBook::search_contact() const
{
	std::string s = "";
	int			n = 0;
	bool		valid = false;

	if (!this->_n_indexes)
		return ;
	PhoneBook::_display_contacts();
	do
	{
		std::cout << "Choose a contact based on index: ";
		std::getline(std::cin, s);
		if (std::cin.fail() || s.empty() || atoi(s.c_str()) <= 0 || atoi(s.c_str()) > this->_n_indexes)
		{
			std::cin.clear();
			std::cout << "Invalid index. Please, try again." << std::endl;
		}
		else
		{
			n = atoi(s.c_str()) - 1;
			valid = true;
		}
	} while (!valid);
	this->_display_contact(n);
}
