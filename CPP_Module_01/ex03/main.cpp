/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:46:32 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/20 14:48:41 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int	main()
{
	ZombieHorde	horde(4);
	
	std::cout << "I just created 4 zombies!!!\n" << std::endl;
	std::cout << "Let's make them announce themselves\n" << std::endl;

	horde.announce();
	std::cout << "\nNow everyone dies\n" << std::endl;
}
