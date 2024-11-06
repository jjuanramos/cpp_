/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:30:31 by juramos           #+#    #+#             */
/*   Updated: 2024/11/06 17:50:38 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <stdexcept>

struct DataTypes {
	char		c;
	int			i;
	float		f;
	double		d;

	bool		i_out_of_range;
	bool		i_impossible;
	bool		c_impossible;
	bool		c_non_displayable;
};

class	ScalarConverter
{
	private:
		ScalarConverter(void);
		~ScalarConverter(void);
		ScalarConverter(ScalarConverter const &src);
		ScalarConverter	&operator=(ScalarConverter const &rhs);
	public:
		static void	convert(std::string const &literal);
};

char	getType(std::string const &literal);
void	printValues(DataTypes const &data);
bool	isPseudoLiteral(std::string const &literal, DataTypes &data);
bool	isOutOfRange(std::string const &literal);

#endif
