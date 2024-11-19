/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:21:34 by juramos           #+#    #+#             */
/*   Updated: 2024/11/19 17:31:17 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

const char	*Span::SpanComplete::what(void) const throw()
{
	return "Span already full";	
}
const char	*Span::LessThanTwo::what(void) const throw()
{
	return "Span contains less than two values";
}
Span::Span(void): _N(0) {}

Span::Span(unsigned int N): _N(N) {}

Span::Span(const Span &toCopy) {
	_N = toCopy._N;
	_lst = toCopy._lst;
}
Span	&Span::operator=(const Span &other) {
	if (this != &other)
	{
		_N = other._N;
		_lst = other._lst;
	}
	return (*this);
}
Span::~Span() {}
void	Span::addNumber(unsigned int const n)
{
	if (_lst.size() == _N)
		throw SpanComplete();
	_lst.insert(n);
}
unsigned int	Span::shortestSpan(void)
{
	if (_lst.size() < 2)
		throw LessThanTwo();
	unsigned int	diff = UINT_MAX;
	for (
		std::set<unsigned int>::iterator it = _lst.begin(), nextIt = ++_lst.begin();
		nextIt != _lst.end();
		++it, ++nextIt) {
			if (*nextIt - *it < diff)
				diff = *nextIt - *it;
		}
	return diff;
	
}
unsigned int	Span::longestSpan(void)
{
	if (_lst.size() < 2)
		throw LessThanTwo();
	return *_lst.rbegin() - *_lst.begin();
}

unsigned int	Span::getN(void) const
{
	return _N;
}
const std::set<unsigned int>	&Span::getLst(void) const
{
	return _lst;
}