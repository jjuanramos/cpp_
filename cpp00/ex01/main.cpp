/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:08:41 by juramos           #+#    #+#             */
/*   Updated: 2024/06/10 16:22:47 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PhoneBook.hpp"

int	main (void)
{
	PhoneBook	pb;
	std::string	input = "";

	pb.welcome();
	while (1)
	{
		std::cout << "> ";
		getline(std::cin, input);
		if (!input.compare("ADD"))
			pb.add_contact();
		else if (!input.compare("SEARCH"))
			pb.search_contact();
		else if (!input.compare("EXIT"))
		{
			std::cout << "Goodbye soldier 🫡" << std::endl;
			return (EXIT_SUCCESS);
		}
		else
			std::cout << "Invalid input. Please, try again." << std::endl;
	}
}