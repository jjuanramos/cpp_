/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:50:39 by juramos           #+#    #+#             */
/*   Updated: 2024/11/13 12:57:27 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void    iter(T *arr, std::size_t len, void (*f)(const T &))
{
    for (std::size_t i = 0; i < len; i++)
    {
        f(arr[i]);
    }
}

#endif