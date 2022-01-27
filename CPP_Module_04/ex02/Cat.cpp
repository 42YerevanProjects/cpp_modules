/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:24:27 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/27 16:26:35 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
        std::cout << "Default constructor of " << this->type << std::endl;
		this->type = "Cat";
		this->brain = new Brain;
}

Cat::Cat(const Cat& other)
{
        std::cout << "Copy-Constructor of " << this->type << std::endl;
		this->type = other.type;
}

Cat::~Cat(void)
{
        std::cout << this->type << " has been destroyed" << std::endl;
		delete this->brain;
}

Cat&		Cat::operator=(const Cat& other)
{
	this->type = other.type;
	*(this->brain) = *(other.brain);

	return (*this);
}

Animal&		Cat::operator=(const Animal& other)
{
	const Cat	*pOther;

	pOther= dynamic_cast<const Cat *>(&other);
	if (pOther)
	{
		this->type = pOther->type;
		*this->brain = *pOther->brain;
	}

	return (*this);
}

void    Cat::makeSound(void) const
{
        std::cout << "* Meow! *" << std::endl;
}

Brain*	Cat::getBrain(void) const
{
	return (this->brain);
}
