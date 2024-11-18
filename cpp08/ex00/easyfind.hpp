/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:32:46 by juramos           #+#    #+#             */
/*   Updated: 2024/11/18 17:47:38 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

template <typename T>
typename T::const_iterator	easyfind(T &lst, int i)
{
	typename T::const_iterator	it = std::find(lst.begin(), lst.end(), i);
	if (it == lst.end())
		throw std::out_of_range("Value not found in lst");
	return it;
}

#endif