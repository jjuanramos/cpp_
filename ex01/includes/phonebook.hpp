/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:42:29 by juramos           #+#    #+#             */
/*   Updated: 2024/06/05 11:32:28 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

class PhoneBook
{
private:
	Contact		_contacts[8];

	void		_display_contacts() const {};

public:
	PhoneBook();
	~PhoneBook();

	void	welcome() const;
	void	add_contact();
	void	search_contact() const;
};

PhoneBook::PhoneBook()
{};

PhoneBook::~PhoneBook()
{};

// void	PhoneBook::_display_contacts() const
// {
// 	int	i = 0;
// 	while (this->_contacts[i])
// 	{

// 	}
// }

void	PhoneBook::welcome() const
{
	std::cout << "Welcome to Phone Book CPP00 📞" << std::endl;
	std::cout << "You've got 3 options available:" << std::endl;
	std::cout << "ADD:\tAdd a new contact" << std::endl;
	std::cout << "SEARCH:\tSearch an existing contact" << std::endl;
	std::cout << "EXIT:\tExit Phone Book CPP00" << std::endl;	
}

void	PhoneBook::add_contact()
{
	Contact		c;
	static int	i = 0;

	if (i == 8)
		i = 0;
	c.init();
	this->_contacts[i] = c;
	i++;
}

void	PhoneBook::search_contact() const
{
	PhoneBook::_display_contacts();
}

#endif
