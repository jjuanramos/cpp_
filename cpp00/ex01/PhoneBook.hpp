/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:42:29 by juramos           #+#    #+#             */
/*   Updated: 2024/06/11 11:08:12 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

class PhoneBook
{
private:
	Contact		_contacts[8];
	int			_n_indexes;

	void		_display_info(std::string elem) const;
	void		_display_contacts() const;
	void		_display_contact(int n) const;
	Contact		_get_contact(int n) const;

public:
				PhoneBook();
				~PhoneBook();

	void		welcome() const;
	void		add_contact();
	void		search_contact() const;
};

#endif
