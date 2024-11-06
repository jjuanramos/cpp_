/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:15:03 by juramos           #+#    #+#             */
/*   Updated: 2024/11/06 18:22:41 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data		data;
	uintptr_t	raw;
	Data*		dummy;

	data.n = 42;

	raw = Serializer::serialize(&data);
	dummy = Serializer::deserialize(raw);
	if (dummy == &data && dummy->n == data.n)
		std::cout << "OK" << std::endl;
	else
		std::cout << "KO" << std::endl;
	return (0);
}
