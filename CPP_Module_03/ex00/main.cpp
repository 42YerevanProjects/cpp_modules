/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 13:43:18 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/25 13:45:53 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	Jack("Jack");
	
	/* Info */
	Jack.setAttackDamage(2);
	std::cout << "\n---------- ClapTrap Jack ----------" << std::endl;
	std::cout << "Hitpoints: " << Jack.getHitPoints() << " ";
	std::cout << "Energy: " << Jack.getEnergyPoints() << " ";
	std::cout << "Attack Damage: " << Jack.getAttackDamage() << " ";
	std::cout << " Status: Active" << std::endl;

	/* Test */
	std::cout << "\nStart attacking...\n" << std::endl;

	Jack.attack("Sharks");
	Jack.attack("Pirates");
	Jack.takeDamage(3);
	Jack.takeDamage(4);
	Jack.beRepaired(10);
	Jack.attack("Dragon");
	Jack.attack("Spirits");
	Jack.attack("Lions");
	Jack.attack("Kings");

	std::cout << "\nFights are over..." << std::endl;
}
