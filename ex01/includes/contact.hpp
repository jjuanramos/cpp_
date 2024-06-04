/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:44:34 by juramos           #+#    #+#             */
/*   Updated: 2024/06/04 17:37:46 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	size_t		phone_number;
	std::string	darkest_secret;

public:
	Contact(const std::string& first_name, const std::string& last_name,
		const std::string& nickname, const size_t phone_number,
		const std::string& darkest_secret): first_name(first_name),
		last_name(last_name), nickname(nickname), phone_number(phone_number),
		darkest_secret(darkest_secret) {};
	
	void	display(void) const
	{
		
	}
};
