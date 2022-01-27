/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 23:41:27 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/27 23:43:35 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::~Animal(void)
{
	std::cout << "Destructor of Animal" << std::endl;
}

const std::string&	Animal::getType(void) const
{
	return (this->type);
}

void				Animal::setType(const std::string& type)
{
	this->type = type;
}
