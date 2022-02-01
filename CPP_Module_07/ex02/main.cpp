/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 23:11:14 by shovsepy          #+#    #+#             */
/*   Updated: 2022/02/01 21:15:27 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <cstdlib>

int	main()
{
	Array<int>			intArray;
	Array<int>			copy(5);
	Array<std::string>	strArray(5);

	for (int i = 0; i < 5; i++)
		copy[i] = rand() % 100;

	std::cout << "intArray size: " << intArray.size() << std::endl;
	std::cout << "strArray size: " << strArray.size() << std::endl;
	std::cout << "copy size: " << intArray.size() << std::endl;

	std::cout << "\nLet's assign copy to intArray..." << std::endl;
	intArray = copy;
	std::cout << intArray << std::endl;

	std::cout << "\nLet's write the strArray with strings..." << std::endl;
	strArray[0] = "Lufi";
	strArray[1] = "Ace";
	strArray[2] = "Sabo";
	strArray[3] = "Dragon";
	strArray[4] = "Garp";
	std::cout << strArray << std::endl;

	std::cout << "\nLet's try getting elems out of intArray size" <<std::endl;
	try
	{
		std::cout << intArray[59] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "59: " << e.what() << std::endl;
	}

	try
	{
		std::cout << intArray[-3] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "-3: " << e.what() << std::endl;
	}

	return (0);
}
