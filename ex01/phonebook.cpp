/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 12:55:56 by juramos           #+#    #+#             */
/*   Updated: 2024/06/04 17:19:04 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "includes/phonebook.hpp"

int	main (int argc, char **argv)
{
	std::string	comm;
	PhoneBook	pb;

	while (true)
	{
		std::cout << "Enter the desired command: ";
		std::cin >> comm;
		if (comm.compare("ADD") == 0)
			pb.add_contact();
		else if (comm.compare("SEARCH") == 0)
			pb.search_contact();
		else if (comm.compare("EXIT") == 0)
			return (EXIT_SUCCESS);
	}
	return (EXIT_SUCCESS);
}
