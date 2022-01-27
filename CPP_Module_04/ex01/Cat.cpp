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

Cat::Cat(void) : Animal("Cat")
{
        std::cout << "Default constructor of " << this->type << std::endl;
		this->brain = new Brain;
}

Cat::Cat(const Cat& other) : Animal("Cat")
{
        std::cout << "Copy-Constructor of " << this->type << std::endl;
		*this = other;
}

Cat::~Cat(void)
{
        std::cout << this->type << " has been destroyed" << std::endl;
		delete this->brain;
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
