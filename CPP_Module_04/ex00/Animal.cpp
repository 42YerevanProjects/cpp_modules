/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:23:27 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/27 15:27:35 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Default Constructor of Animal" << std::endl;
}

Animal::Animal(const std::string& type)
{
	std::cout << "Type constructor of Animal" << std::endl;
	this->type = type;
}

Animal::Animal(const Animal& other)
{
	std::cout << "Copy-Constructor of Animal" << std::endl;
	*this = other; 
}

Animal::~Animal(void)
{
	std::cout << "Destructor of Animal" << std::endl;
}

Animal&				Animal::operator=(const Animal& other)
{
	this->type = other.getType();

	return (*this);
}

const std::string&	Animal::getType(void) const
{
	return (this->type);
}

void				Animal::setType(const std::string& type)
{
	this->type = type;
}

void				Animal::makeSound(void) const
{
	std::cout << "* Animal Sound!!! *" << std::endl;
}
