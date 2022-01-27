/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:54:27 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/27 16:57:35 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "Default Constructor of WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type)
{
	std::cout << "Type constructor of WrongAnimal" << std::endl;
	this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "Copy-Constructor of WrongAnimal" << std::endl;
	*this = other; 
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Destructor of WrongAnimal" << std::endl;
}

WrongAnimal&				WrongAnimal::operator=(const WrongAnimal& other)
{
	this->type = other.getType();

	return (*this);
}

const std::string&	WrongAnimal::getType(void) const
{
	return (this->type);
}

void				WrongAnimal::setType(const std::string& type)
{
	this->type = type;
}

void				WrongAnimal::makeSound(void) const
{
	std::cout << "* WrongAnimal Sound!!! *" << std::endl;
}
                                                        
