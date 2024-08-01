/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 13:32:08 by juramos           #+#    #+#             */
/*   Updated: 2024/08/01 13:59:40 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

enum ValueType {
    INTEGER,
    FLOAT,
	DOUBLE,
    CHARACTER,
	UNKNOWN
};

bool ScalarConverter::_is_printable(char c)
{
	if (c > 32 && c < 127)
		return (true);
	return (false);
}

int	ScalarConverter::_checkType(char *str)
{
	char	*end;

	errno = 0;
	long	v = std::strtol(str, &end, 10);
	if (errno == 0 && *end == '\0' && v >= LONG_MIN && v <= LONG_MAX)
		return INTEGER;

	errno = 0;
	float	f = std::strtof(str, &end);
	if (errno == 0 && (*end == '\0' || (*end == 'f' && *(end + 1) == '\0')))
		return FLOAT;

	errno = 0;
	double	f = std::strtod(str, &end);
	if (errno == 0 && (*end == '\0'))
		return DOUBLE;

	errno = 0;
	if (std::strlen(str) == 1)
		return CHARACTER;

	return UNKNOWN;
}

void	ScalarConverter::convert(char* str)
{
	int	val = ScalarConverter::_checkType(str);
	switch (val)
	{
	case INTEGER:
		break;
	case FLOAT:
		break;
	case DOUBLE:
		break;
	case CHARACTER:
		break;
	default:
		break;
	}
}