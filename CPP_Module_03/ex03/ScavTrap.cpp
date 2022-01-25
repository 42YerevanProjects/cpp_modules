/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:01:18 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/25 16:15:53 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap default constructor has been called!" << std::endl;

}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "<ScavTrap " << this->name << "> Status: Created" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "<ScavTrap copy-constructor has been called!> Status: Cloned" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "<ScavTrap " << this->name << "> Status: Dead" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->energyPoints < 5)
	{
		std::cout << "<ScavTrap " << this->name << " does not have enough energy to attack> ";
		std::cout << "Energy: " << this->energyPoints << " Status: Exhausted" << std::endl;
	}
	else
	{
		this->energyPoints -= 5;
		std::cout << "<ScavTrap " << this->name << " attack " << target;
		std::cout << ", causing " << this->attackDamage << " points of damage!> ";
		std::cout << "Energy: " << this->energyPoints << " Status: Atacked" << std::endl;
	}
}

void	ScavTrap::guardGate(void) const
{
	std::cout << "<ScavTrap " << this->name << " is guarding the gates> ";
	std::cout << "Status: Guarding" << std::endl;
}
