/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 21:54:14 by shovsepy          #+#    #+#             */
/*   Updated: 2022/02/01 21:59:27 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

template<typename T>
void	display(T& elem)
{
	std::cout << "Variable's value is: " << elem << std::endl;
}

void	setRandomValue(int& number)
{
	number = rand() % 100;
}

int	main()
{
	int	intArray[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	srand(time(NULL));

	std::cout << "Displaying int Array\n" << std::endl;
	iter<int>(intArray, 10, &display);

	std::cout << "\nSetting each value to random integer" << std::endl;
	iter<int>(intArray, 10, &setRandomValue);

	std::cout << "\nDisplaying int Array with random values\n" << std::endl;
	::iter<int>(intArray, 10, &display);

	return (0);
}
