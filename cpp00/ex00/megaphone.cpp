/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 12:55:56 by juramos           #+#    #+#             */
/*   Updated: 2024/07/04 11:46:01 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>

int	main (int argc, char **argv)
{
	size_t		i;
	std::string s;

	i = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE NOISE *";
	else
		while (++i < (size_t)argc)
		{
			s = argv[i];
			std::transform(s.begin(), s.end(), s.begin(), ::toupper);
			std::cout << s;
		}
	std::cout << std::endl;
	return (0);
}
