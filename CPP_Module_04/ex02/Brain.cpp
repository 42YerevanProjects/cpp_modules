/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 19:51:08 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/27 20:01:35 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default constructor of Brain" << std::endl;
	size = 0;
}

Brain::Brain(const Brain& other)
{
	std::cout << "Copy-Constructor of Brain" << std::endl;
	*this = other;
}

Brain::~Brain(void)
{
	std::cout << "Destructor of Brain" << std::endl;
}

Brain&			Brain::operator=(const Brain& other)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	this->size = other.size;
	return (*this);
}

const std::string&	Brain::getIdea(unsigned int index) const
{
	return (this->ideas[index]);
}

void				Brain::addIdea(std::string idea)
{
	if (size == 100)
		return;
	this->ideas[size++] = idea;
}
