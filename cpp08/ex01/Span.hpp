/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:55:27 by juramos           #+#    #+#             */
/*   Updated: 2024/11/19 17:31:28 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <set>
#include <string>
#include <iostream>
#include <limits.h>

class Span
{
private:
	std::set<unsigned int>	_lst;
	unsigned int				_N;
public:
								Span(void);
								Span(unsigned int N);
								Span(const Span &toCopy);
	Span						&operator=(const Span &other);
								~Span();
	void						addNumber(unsigned int const n);
	unsigned int				shortestSpan(void);
	unsigned int				longestSpan(void);
	unsigned int				getN(void) const;
	const std::set<unsigned int>	&getLst(void) const;

	class SpanComplete: public std::exception {
		public:
			const char			*what(void) const throw();
	};
	class LessThanTwo: public std::exception {
		public:
			const char			*what(void) const throw();
	};
};

#endif