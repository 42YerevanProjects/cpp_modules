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

void	Zombie::announce() const
{
	std::cout << "<" << this->name << " ";
	std::cout << "(" << this->type << ")>";
	std::cout << " Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie(std::string name, std::string type)
	: name(name), type(type)
{
	announce();
}

Zombie::~Zombie() 
{
	std::cout << this->name << "died!" << std::endl;
}

const std::string&	Zombie::get_name() const
{
	return (this->name);
}

const std::string&	Zombie::get_type() const
{
	return (this->type);
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}

void	Zombie::set_type(std::string type)
{
	this->type = type;
}

