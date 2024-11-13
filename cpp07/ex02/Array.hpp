/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:59:29 by juramos           #+#    #+#             */
/*   Updated: 2024/11/13 17:58:54 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
    private:
        
    public:
                    Array(void);
                    Array(const unsigned int n);
                    Array(Array &toCopy);
                    ~Array(void);
        Array       &operator=(Array &other);
        T           &operator[](std::size_t index) const;
        std::size_t size(void) const;

    private:
        T           *_arr;
        std::size_t _size;

};

#include "Array.tpp"

#endif