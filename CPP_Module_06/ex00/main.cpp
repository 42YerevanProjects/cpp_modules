/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:57:55 by shovsepy          #+#    #+#             */
/*   Updated: 2022/04/05 17:07:58 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Interpreter.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 2)
		std::cout << "convert: bad arguments!" << std::endl;
	else
	{
		Interpreter p(argv[1]);
		std::cout << p << std::endl;
	}
	return (0);
}
