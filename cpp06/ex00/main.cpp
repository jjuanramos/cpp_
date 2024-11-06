/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:30:06 by juramos           #+#    #+#             */
/*   Updated: 2024/11/06 12:11:27 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "wrong number of parameters. Exiting" << std::endl;
		return (1);
	}
	std::string str (argv[1]);
	ScalarConverter::convert(str);
	return (0);
}
