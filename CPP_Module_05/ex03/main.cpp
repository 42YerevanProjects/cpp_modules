/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 13:52:24 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/30 13:58:21 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
	Intern	intern;
	Form	*f;

	f = intern.makeForm("shrubbery creation", "28C");
	std::cout << *f << std::endl;
	std::cout << std::endl;


	f = intern.makeForm("robotomy request", "28B");
	std::cout << *f << std::endl;
	std::cout << std::endl;

	f = intern.makeForm("presidential pardon", "28A");
	std::cout << *f << std::endl;
	std::cout << std::endl;
	
	f = intern.makeForm("undefined", "0U");
	delete f;

	return 0;
}
