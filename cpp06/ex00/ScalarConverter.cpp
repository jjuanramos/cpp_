/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:30:28 by juramos           #+#    #+#             */
/*   Updated: 2024/11/06 18:10:22 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
}

ScalarConverter::~ScalarConverter(void)
{
}

ScalarConverter::ScalarConverter(ScalarConverter const &src)
{
	*this = src;
}

ScalarConverter	&ScalarConverter::operator=(ScalarConverter const &rhs)
{
	(void)rhs;
	return (*this);
}

void	ScalarConverter::convert(std::string const &literal)
{
	DataTypes	data;
	
	data.i_impossible = false;
	data.c_impossible = false;
	data.c_non_displayable = false;
	data.i_out_of_range = false;

	if (!isPseudoLiteral(literal, data))
	{
		char	type = getType(literal);
		if (type == 'e')
		{
			std::cerr << "Invalid literal" << std::endl;
			return ;
		}
		else if (type == 'c')
		{
			if (data.c < CHAR_MIN || data.c > CHAR_MAX)
				data.c_non_displayable = true;
			else
				data.c = literal[0];
			data.i = static_cast<int>(data.c);
			data.f = static_cast<float>(data.c);
			data.d = static_cast<double>(data.c);
		}
		else if (type == 'i')
		{
			if (isOutOfRange(literal))
			{
				data.i_out_of_range = true;
				data.f = static_cast<float>(std::stoll(literal));
				data.d = static_cast<double>(data.f);
				data.c_impossible = true;
			}
			else
			{
				data.i = std::stoi(literal);
				if (data.i >= 0 && data.i <= 127)
					data.c = static_cast<char>(data.i);
				else
					data.c_non_displayable = true;
				data.f = static_cast<float>(data.i);
				data.d = static_cast<double>(data.i);
			}
		}
		else if (type == 'f')
		{
			data.f = std::stof(literal);
			data.i = static_cast<int>(data.f);
			if (data.i >= CHAR_MIN && data.i <= CHAR_MAX)
				data.c = static_cast<char>(data.i);
			else
				data.c_non_displayable = true;
			data.d = static_cast<double>(data.f);
		}
		else if (type == 'd')
		{
			data.d = std::stod(literal);
			data.i = static_cast<int>(data.d);
			if (data.i >= CHAR_MIN && data.i <= CHAR_MAX)
				data.c = static_cast<char>(data.i);
			else
				data.c_non_displayable = true;
			data.f = static_cast<float>(data.d);
		}
	}
	printValues(data);
}

bool	isOutOfRange(std::string const &literal)
{
	long long value = std::stoll(literal);
	if (value > INT_MAX || value < INT_MIN)
		return (true);
	return (false);
}

void	printValues(DataTypes const &data)
{
	std::cout << "char: ";
	if (data.c_impossible)
		std::cout << "impossible";
	else if (data.c_non_displayable)
		std::cout << "non displayable";
	else
		std::cout << "'" << data.c << "'";
	std::cout << std::endl;
	std::cout << "int: ";
	if (data.i_out_of_range)
		std::cout << "out of range";
	else if (data.i_impossible)
		std::cout << "impossible";
	else
		std::cout << data.i;
	std::cout << std::endl;
	std::cout << "float: ";
	std::cout << data.f;
	if (hasIntEnd(data.d))
		std::cout << ".0";
	std::cout << "f" << std::endl;
	std::cout << "double: ";
	std::cout << data.d;
	if (hasIntEnd(data.d))
		std::cout << ".0";
	std::cout << std::endl;
}

bool	hasIntEnd(double value)
{
	if (value == static_cast<int>(value))
		return (true);
	return (false);
}

bool	isPseudoLiteral(std::string const &literal, DataTypes &data)
{
	if (literal == "nan" || literal == "nanf")
	{
		if (literal == "nan")
		{
			data.d = std::numeric_limits<double>::quiet_NaN();
			data.f = static_cast<float>(data.d);
		}
		else
		{
			data.f = std::numeric_limits<float>::quiet_NaN();
			data.d = static_cast<double>(data.f);
		}
	}
	else if (literal == "+inf" || literal == "+inff")
	{
		if (literal == "+inf")
		{
			data.d = std::numeric_limits<double>::infinity();
			data.f = static_cast<float>(data.d);
		}
		else
		{
			data.f = std::numeric_limits<float>::infinity();
			data.d = static_cast<double>(data.f);
		}
	}
	else if (literal == "-inf" || literal == "-inff")
	{
		if (literal == "-inf")
		{
			data.d = -std::numeric_limits<double>::infinity();
			data.f = static_cast<float>(data.d);
		}
		else
		{
			data.f = -std::numeric_limits<float>::infinity();
			data.d = static_cast<double>(data.f);
		}
	}
	else
		return (false);
	data.i_impossible = true;
	data.c_impossible = true;
	return (true);
}
