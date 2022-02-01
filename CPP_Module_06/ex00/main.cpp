/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:14:17 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/31 21:20:29 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TypeAnalyst.hpp"

int	main(int argc, char **argv)
{
	TypeAnalyst	*analyst;

	if (argc != 2)
	{
		std::cout << "The program takes a string literal as an input!" << std::endl;
		return (1);
	}

	try
	{
		analyst = new TypeAnalyst(argv[1]);	
	}
	catch (std::exception& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
		exit(0);
	}

	analyst->printCharType();
	analyst->printIntType();
	analyst->printFloatType();
	analyst->printDoubleType();

	delete analyst;
}

