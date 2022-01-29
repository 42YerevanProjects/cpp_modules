/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 02:30:08 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/28 02:37:35 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string& name) : name(name)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(const Character& other)
{
	*this = other;
}

Character::~Character(void)
{
	for (int i = 0; i < size; i++)
		delete this->inventory[i];
}

Character&			Character::operator=(const Character& other)
{
	this->name = other.getName();
	this->size = 0;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		this->inventory[i] = other.inventory[i];
		if (other.inventory[i])
			this->size++;
	}
	return (*this);
}

const std::string&	Character::getName(void) const
{
	return (this->name);
}

void				Character::equip(AMateria *m)
{
	if (this->size < 4)
		this->inventory[size++] = m;
	else
		std::cout << "Couldn't equip a " << m->getType() << ", no more space" << std::endl;
}

void			Character::unequip(int idx)
{
	if (idx >= 0 && idx < this->size)
	{
		idx++;
		while (idx < this->size)
		{
			this->inventory[idx - 1] = this->inventory[idx];
			idx++;
		}
		this->size--;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < this->size)
		this->inventory[idx]->use(target);
}
