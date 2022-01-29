/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 01:55:11 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/28 01:58:25 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(const Cure& other) : AMateria("cure")
{
	*this = other;
}

Cure::~Cure(void) {}

Cure&    Cure::operator=(const Cure& other)
{
	this->type = other.type;
	return (*this);
}

AMateria*       Cure::clone() const
{
	return (new Cure(*this));
}

void            Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
                        
