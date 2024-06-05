/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:42:29 by juramos           #+#    #+#             */
/*   Updated: 2024/06/05 13:28:11 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

class PhoneBook
{
private:
	Contact		_contacts[8];
	int			_n_indexes;

	void		_display_info(std::string elem) const;
	void		_display_contacts() const;

public:
	PhoneBook(): _n_indexes(0) {};
	~PhoneBook();

	void	welcome() const;
	void	add_contact();
	void	search_contact() const;
};

PhoneBook::~PhoneBook()
{};

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
	std::string			elem = "";
	std::stringstream 	s;

	while (i < this->_n_indexes)
	{
		std::cout << "|";
		s << (i + 1);
		if (s.str().length() == 1)
			this->_display_info(s.str());
		else
			this->_display_info(s.str().substr(1, 1));
		this->_display_info(this->_contacts[i].get_first_name());
		this->_display_info(this->_contacts[i].get_last_name());
		this->_display_info(this->_contacts[i].get_nickname());
		std::cout << std::endl;
		i++;
	}
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
	size_t		n = 0;
	bool		valid = false;

	if (!this->_n_indexes)
		return ;
	PhoneBook::_display_contacts();
	std::cout << "Choose a contact based on index: ";
	do
	{
		std::getline(std::cin, s);
		if (std::cin.fail() || s.empty() || atoi(s.c_str()) <= 0 || atoi(s.c_str()) > this->_n_indexes)
		{
			std::cin.clear();
			std::cout << "Invalid index. Please, try again." << std::endl;
			std::cout << "> ";
		}
		else
		{
			n = atoi(s.c_str());
			valid = true;
		}
	} while (!valid);
	(void)n;
}

#endif
