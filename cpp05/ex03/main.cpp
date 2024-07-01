/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:30:04 by juramos           #+#    #+#             */
/*   Updated: 2024/07/01 10:18:51 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int	main()
{
	Intern		juan;
	AForm*		myForm;
	AForm*		yourForm;
	Bureaucrat	Mike("Mike", 1);
	
	myForm = juan.makeForm("robotomy request", "Shrek");
	if (myForm)
		myForm->checkAndExecute(Mike);
	else
		return (1);
	myForm->beSigned(Mike);
	myForm->checkAndExecute(Mike);
	yourForm = juan.makeForm("non existing", "juan");
	if (yourForm)
		yourForm->checkAndExecute(Mike);
	else
		return (1);
	return (0);
}
