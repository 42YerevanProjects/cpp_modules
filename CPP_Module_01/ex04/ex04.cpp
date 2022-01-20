/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 21:47:27 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/20 21:48:44 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	str;
	std::string	*str_ptr;
	std::string	&str_ref = str;

	str = "HI THIS IS BRAIN";
	str_ptr = &str;
	std::cout << "String pointer: " << *str_ptr << std::endl;
	std::cout << "String reference: " << str_ref << std::endl;
}
