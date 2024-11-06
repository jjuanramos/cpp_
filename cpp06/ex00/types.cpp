/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:26:54 by juramos           #+#    #+#             */
/*   Updated: 2024/11/06 18:07:13 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

static bool	isChar(std::string const &literal)
{
	if (literal.size() == 1 && !isdigit(literal[0])
		&& (literal[0] >= 0 && literal[0] <= 127))
		return (true);
	return (false);
}

static bool	isInt(std::string const &literal)
{
	std::string::size_type	pos = 0;

	if (literal[pos] == '+' || literal[pos] == '-')
		++pos;
	if (literal.find_first_not_of("0123456789", pos) == std::string::npos)
		return (true);
	return (false);
}

static bool	isFloat(std::string const &literal)
{
	std::string::size_type	pos = 0;

	if (literal[pos] == '+' || literal[pos] == '-')
		++pos;
	while (literal[pos] && isdigit(literal[pos]))
		++pos;
	if (literal[pos] == '.')
		++pos;
	while (literal[pos] && isdigit(literal[pos]))
		++pos;
	if (literal[pos] == 'f')
		++pos;
	if (pos == literal.size())
		return (true);
	return (false);
}

static bool	isDouble(std::string const &literal)
{
	std::string::size_type	pos = 0;

	if (literal[pos] == '+' || literal[pos] == '-')
		++pos;
	while (literal[pos] && isdigit(literal[pos]))
		++pos;
	if (literal[pos] == '.')
		++pos;
	while (literal[pos] && isdigit(literal[pos]))
		++pos;
	if (pos == literal.size())
		return (true);
	return (false);
}

char	getType(std::string const &literal)
{
	if (literal.empty())
		return ('e');
	if (isChar(literal))
		return ('c');
	if (isInt(literal))
		return ('i');
	if (isFloat(literal))
		return ('f');
	if (isDouble(literal))
		return ('d');
	return ('e');
}
