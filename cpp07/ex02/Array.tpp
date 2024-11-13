/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:43:38 by juramos           #+#    #+#             */
/*   Updated: 2024/11/13 17:59:26 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void): _arr(NULL), _size(0) {}

template <typename T>
Array<T>::Array(const unsigned int n): _arr(new T[n]), _size(n) {}

template <typename T>
Array<T>::Array(Array &toCopy): _arr(NULL) {
    *this = toCopy;
}

template <typename T>
Array<T>::~Array(void)
{
    delete []_arr;
}

template <typename T>
Array<T>   &Array<T>::operator=(Array &other)
{
    if (this != other)
    {
        delete []_arr;
        _arr = new T[other.size()];
        for (std::size_t i; i < other.size(); i++)
            _arr[i] = other[i];
        _size = other.size();
    }
    return (this);
}

template <typename T>
T   &Array<T>::operator[](std::size_t index) const
{
    if (index >= _size)
        throw std::out_of_range("index out of range");
    return (_arr[index]);
}

template <typename T>
std::size_t Array<T>::size(void) const
{
    return _size;
}