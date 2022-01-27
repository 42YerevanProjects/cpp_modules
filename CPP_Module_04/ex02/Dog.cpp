/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:11:27 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/27 16:14:35 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default constructor of " << this->type << std::endl;
	this->type = "Dog";
	this->brain = new Brain;
}

Dog::Dog(const Dog& other)
{
	std::cout << "Copy-Constructor of " << this->type << std::endl;
	*this = other;
}

Dog::~Dog(void)
{
	std::cout << this->type << " has been destroyed" << std::endl;
	delete this->brain;
}

Dog&		Dog::operator=(const Dog& other)
{
	this->type = other.type;
	*(this->brain) = *(other.brain);

	return (*this);
}

Animal&		Dog::operator=(const Animal& other)
{
	const Dog	*pOther; 

	pOther = dynamic_cast<const Dog*>(&other);
	if(pOther)
	{
		this->type = pOther->type;
		*this->brain = *pOther->brain;
	}

	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "* Barking! *" << std::endl;
}

Brain*	Dog::getBrain(void) const
{
	return (this->brain);
}
