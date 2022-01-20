/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 01:06:32 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/16 01:08:41 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
	: name(name), type(type)
{
	announce();
}

Zombie::Zombie() {}

Zombie::~Zombie() 
{
	std::cout << this->name << " died!" << std::endl;
}

const std::string&	Zombie::getName() const
{
	return (this->name);
}

const std::string&	Zombie::getType() const
{
	return (this->type);
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

void	Zombie::setType(std::string type)
{
	this->type = type;
}

void	Zombie::announce() const
{
	std::cout << "<" << this->name << " ";
	std::cout << "(" << this->type << ")>";
	std::cout << " Braiiiiiiinnnssss..." << std::endl;
}

