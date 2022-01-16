/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 23:16:32 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/16 13:17:41 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string origin, int age)
{
	this->name = name;
	this->origin = origin;
	this->age = age;
	this->magical = origin == "Iceland" ? true : false;
}

const std::string&	Pony::get_name() const
{
	return (this->name);
}

const std::string&	Pony::get_origin() const
{
	return (this->origin);
}

int 	Pony::get_age() const
{
	return (this->age);
}

bool	Pony::is_magical() const
{
	return (this->magical);
}

void	Pony::set_name(std::string name)
{
	this->name = name;
}

void	Pony::set_origin(std::string origin)
{
	this->origin = origin;
}

void	Pony::set_age(int age)
{
	if (age > 0)
		this->age = age;
}

void	Pony::run() const
{
	std::cout << name << "IS RUNNING!" << std::endl;
}

void	Pony::eat() const
{
	std::cout << name << "IS EATING!" << std::endl;
}


void	Pony::speak() const
{
	if (!is_magical())
	{
		std::cout << name << "IS NOT A MAGICAL PONY AND CANNOT SPEAK!" << std::endl;
		return;
	}
	std::cout << "I AM MAGICAL PONY FROM ICELAND!" << std::endl;
}
