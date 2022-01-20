/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:05:17 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/19 16:06:41 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Zombie.hpp"
#include <cstdlib>

class ZombieEvent {
	private:
		std::string	type;
		static std::string	namepool[7];
	public:
		Zombie	*newZombie(std::string name) const;
		Zombie	*randomChump(void) const;
		void	setZombieType(std::string type);
};
