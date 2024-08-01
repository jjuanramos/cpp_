/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:30:04 by juramos           #+#    #+#             */
/*   Updated: 2024/08/01 12:24:23 by juramos          ###   ########.fr       */
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
	try {
		if (myForm)
			myForm->execute(Mike);
	}
	catch (AForm::FormNotSigned& e)
	{
		std::cerr << e.what() << std::endl;
	}
	myForm->beSigned(Mike);
	myForm->execute(Mike);
	delete myForm;
	yourForm = juan.makeForm("non existing", "juan");
	if (yourForm)
		yourForm->execute(Mike);
	delete yourForm;
	return (0);
}
