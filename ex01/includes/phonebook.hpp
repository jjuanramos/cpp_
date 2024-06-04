/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:42:29 by juramos           #+#    #+#             */
/*   Updated: 2024/06/04 17:26:31 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iostream>

class PhoneBook
{
private:
	Contact		contacts[8];
	int	contacts_count;
public:
	PhoneBook(): contacts_count(0) {};

	void	add_contact(void)
	{
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		size_t		phone_number;
		std::string	darkest_secret;

		std::cout << "Enter first name: ";
		std::cin >> first_name;
		std::cout << "Enter last name: ";
		std::cin >> last_name;
		std::cout << "Enter nickname: ";
		std::cin >> nickname;
		std::cout << "Enter phone number: ";
		std::cin >> phone_number;
		std::cout << "Enter darkest secret: ";
		std::cin >> darkest_secret;
	
		if (first_name.empty() || last_name.empty() || nickname.empty()
			|| darkest_secret.empty() || phone_number == 0)
		{
			std::cout << "Failed to add contact" << std::endl;
			return ;
		}
		if (contacts_count == 8)
			contacts_count = 0;
		contacts[contacts_count] = Contact(first_name, last_name, nickname, phone_number,
			darkest_secret);
		contacts_count++;
		return ;
	}
};
