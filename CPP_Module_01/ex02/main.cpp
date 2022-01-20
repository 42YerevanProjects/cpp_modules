/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:32:32 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/16 19:33:41 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <ctime>

int	main()
{
	Zombie		Bob("Bob", "Walker");
	Zombie		Paul("Paul", "Deadhead");
	Zombie		Marcus("Marcus", "Biter");
	Zombie		*Matthew;
	Zombie		*Gary;
	Zombie		*random;
	ZombieEvent	event;

	/* Seed for psudo-random number */
	srand(time(NULL));

	std::cout << "\nI just created Zombies on stack!" << std::endl;
	std::cout << "\nLet's create Zombies on heap\n" << std::endl;

	event.setZombieType(Bob.getType());
	Matthew = event.newZombie("Matthew");
	std::cout << "Matthew is here!" << std::endl;
	delete Matthew;

	event.setZombieType(Paul.getType());
	Gary = event.newZombie("Gary");
	std::cout << "Gary is here!" << std::endl;
	delete Gary;
	
	event.setZombieType(Marcus.getType());
	random = event.randomChump();
	std::cout << (*random).getName() << " is a random zombie!" << std::endl;
	delete random;

	std::cout << std::endl;
}
