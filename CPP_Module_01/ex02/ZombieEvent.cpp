/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:27:32 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/19 16:27:41 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

std::string	ZombieEvent::namepool[7]  = {"Alfred", "Richardo", "Leonardo", "Adam", "Charles", "Dominic", "Ferdinand"};

Zombie	*ZombieEvent::newZombie(std::string name) const
{
	return (new Zombie(name, this->type));
}

Zombie	*ZombieEvent::randomChump(void) const
{
	std::string name;

	name = namepool[rand() % 7];
	return (new Zombie(name, this->type));
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}
