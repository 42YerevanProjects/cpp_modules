/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 22:39:18 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/24 22:45:53 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* Constructors and the Destructor */
ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap default constructor has been called!" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ClapTrap::ClapTrap(const ClapTrap& other) 
{ 
	std::cout << "<ClapTrap copy-constructor has been called!> Status: Cloned" << std::endl;
	*this = other; // Overloaded =

} 

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "<ClapTrap " << name << "> " << "Status: Created" << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "<ClapTrap " << this->name << "> " << "Status: Dead" << std::endl;
}

/* Assignation operator overload */
ClapTrap&			ClapTrap::operator=(const ClapTrap& other)
{
	this->setName(other.getName());
	this->setHitPoints(other.getHitPoints());
	this->setEnergyPoints(other.getEnergyPoints());
	this->setAttackDamage(other.getAttackDamage());

	return (*this);
}

/* Getters and Setters */
const std::string&	ClapTrap::getName(void) const
{
	return (this->name);
}

unsigned int		ClapTrap::getHitPoints(void) const
{
	return (this->hitPoints);
}

unsigned int		ClapTrap::getEnergyPoints(void) const
{
	return (this->energyPoints);
}

unsigned int		ClapTrap::getAttackDamage(void) const
{
	return (this->attackDamage);
}

void				ClapTrap::setName(const std::string& name)
{
	this->name = name;
}

void				ClapTrap::setHitPoints(unsigned int hitPoints)
{
	this->hitPoints = hitPoints;
}

void				ClapTrap::setEnergyPoints(unsigned int energyPoints)
{
	this->energyPoints = energyPoints;
}

void				ClapTrap::setAttackDamage(unsigned int damage)
{
	this->attackDamage = damage;
}

/* Action functions */
void				ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints < 2)
	{
		std::cout << "<ClapTrap " << this->name << " does not have enough energy to attack> ";
		std::cout << "Energy: " << this->energyPoints << " Status: Exhausted" << std::endl;
	}
	else
	{
		this->energyPoints -= 2;
		std::cout << "<ClapTrap " << this->name << " attack " << target;
		std::cout << ", causing " << this->attackDamage << " points of damage!> ";
		std::cout << "Energy: " << this->energyPoints << " Status: Atacked" << std::endl;
	}
}

void				ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > this->hitPoints)
		this->hitPoints = 0;
	else
		this->hitPoints -= amount;
	std::cout << "<ClapTrap " << this->name << " got " << amount << " points of damage!>";
	std::cout << " Hitpoints: " << this->hitPoints << " Status: Damaged" << std::endl;
}

void				ClapTrap::beRepaired(unsigned int amount)
{
	this->hitPoints += amount;
	std::cout << "<ClapTrap " << this->name << " got repaired by " << amount << " points!>";
	std::cout << " Hitpoints: " << this->hitPoints << " Status: Repaired" << std::endl;
}
