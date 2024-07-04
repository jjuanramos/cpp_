/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:26:23 by juramos           #+#    #+#             */
/*   Updated: 2024/07/04 11:46:01 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string		s = "HI THIS IS BRAIN";
	std::string*	stringPTR = &s;
	std::string& 	stringREF = s;

	std::cout << &s << " " << &stringPTR << " " << &stringREF << std::endl;
	std::cout << s << " " << *stringPTR << " " << stringREF << std::endl;
	return (0);
}
