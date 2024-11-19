/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:50:54 by juramos           #+#    #+#             */
/*   Updated: 2024/11/19 18:54:48 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <string>

template <typename T>
class MutantStack: public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

							MutantStack();
							MutantStack(MutantStack const &toCopy);
	MutantStack				&operator=(MutantStack const &other);
							~MutantStack();

	iterator				begin();
	const_iterator			begin() const;

	iterator				end();
	const_iterator			end() const;

	reverse_iterator		rbegin();
	const_reverse_iterator	rbegin() const;

	reverse_iterator		rend();
	const_reverse_iterator	rend() const;
};

#include "MutantStack.tpp"

#endif