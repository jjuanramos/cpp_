/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:58:03 by juramos           #+#    #+#             */
/*   Updated: 2024/11/19 17:32:58 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	try
	{
		sp.addNumber(11);
	}
	catch (Span::SpanComplete& e)
	{
		std::cerr << e.what() << std::endl;
	}
	Span spn = Span(3);
	spn.addNumber(1);
	try
	{
		std::cout << spn.longestSpan() << std::endl;
	}
	catch(Span::SpanComplete& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Span::LessThanTwo& e)
	{
		std::cerr << "error: " << e.what() << std::endl;
	}
	
	return 0;
}