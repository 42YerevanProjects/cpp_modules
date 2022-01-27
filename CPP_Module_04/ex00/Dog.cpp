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

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Default constructor of " << this->type << std::endl;
}

Dog::Dog(const Dog&) : Animal("Dog")
{
	std::cout << "Copy-Constructor of " << this->type << std::endl;
}

Dog::~Dog(void)
{
	std::cout << this->type << " has been destroyed" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "* Barking! *" << std::endl;
}
