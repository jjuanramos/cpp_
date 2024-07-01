/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:30:04 by juramos           #+#    #+#             */
/*   Updated: 2024/07/01 10:12:00 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int	main()
{
	Intern		juan;
	AForm*		myAForm;
	AForm*		yourAForm;
	Bureaucrat	Mike("Mike", 1);
	
	myAForm = juan.makeAForm("robotomy request", "Shrek");
	if (myAForm)
		myAForm->execute(Mike);
	else
		return (1);
	yourAForm = juan.makeAForm("non existing", "juan");
	if (yourAForm)
		yourAForm->execute(Mike);
	else
		return (1);
	return (0);
}
