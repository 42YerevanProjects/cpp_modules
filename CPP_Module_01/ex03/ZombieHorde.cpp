/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 12:46:32 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/20 00:46:41 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string ZombieHorde::namepool[7] = {"Alfred", "Richardo", "Leonardo", "Adam", "Charles", "Dominic", "Ferdinand"};
std::string	ZombieHorde::typepool[7] = {"Walker", "Deadhead", "Stalker", "Bitter", "Rotter", "Wasted", "Infected"};

ZombieHorde::ZombieHorde(int N)
{
	int 		i;

	i = 0;
	this->zombies = new Zombie[N];
	while (i < N)
	{
		this->zombies[i].set_name(this->namepool[rand() % 7]);
		this->zombies[i].set_type(this->typepool[rand() % 7]);
		i++;
	}
	this->size = N;
}

ZombieHorde::~ZombieHorde()
{
	delete[] this->zombies;
}

void	ZombieHorde::announce()	const
{
	int	i;

	i = 0;
	while (i < this->size)
	{
		this->zombies[i].announce();
		i++;
	}
}
