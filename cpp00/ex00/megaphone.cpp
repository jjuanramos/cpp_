/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 12:55:56 by juramos           #+#    #+#             */
/*   Updated: 2024/07/05 11:11:37 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

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
			std::string::size_type	j = -1;
			while (++j < s.length())
				s[j] = std::toupper(s[j]);
			std::cout << s;
		}
	std::cout << std::endl;
	return (0);
}
