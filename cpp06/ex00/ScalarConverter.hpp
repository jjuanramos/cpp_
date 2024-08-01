/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 13:20:19 by juramos           #+#    #+#             */
/*   Updated: 2024/08/01 13:53:42 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER
#define SCALARCONVERTER

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cerrno>
#include <climits>
#include <cctype>

class ScalarConverter
{
private:
	static bool	_is_printable(char c);
	static int	_checkType(char *str);
public:
	static void	convert(char *str);
};

#endif