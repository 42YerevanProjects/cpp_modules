/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:21:17 by shovsepy          #+#    #+#             */
/*   Updated: 2022/02/01 19:25:29 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main()
{
	Data		*ptr;
	Data		*new_ptr;
	uintptr_t	raw;

	ptr = new Data;
	ptr->data = "Dummy Data!";

	raw = serialize(ptr);
	new_ptr = deserialize(raw);

	std::cout << "Data of ptr: " << ptr->data << std::endl;
	std::cout << "Data of new_ptr: " << new_ptr->data << std::endl;

	delete ptr;
}
