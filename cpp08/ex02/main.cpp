/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:50:46 by juramos           #+#    #+#             */
/*   Updated: 2024/11/19 18:57:47 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main(void)
{
	MutantStack<int> mstack;

	mstack.push(1);
	mstack.push(2);
	mstack.push(4);

	for(MutantStack<int>::iterator i = mstack.begin(); i < mstack.end(); i++)
		std::cout << *i << std::endl;

	std::cout << mstack.top() << std::endl;
	std::cout << mstack.empty() << std::endl;

	mstack.pop();
	for(MutantStack<int>::iterator i = mstack.begin(); i < mstack.end(); i++)
		std::cout << *i << std::endl;

	std::stack<int> s = mstack;
	std::cout << s.top() << std::endl;
	
	return 0;
}
