/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 12:30:32 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/20 12:31:41 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Zombie.hpp"
#include <ctime>

class ZombieHorde {
	private:
		static std::string	namepool[7];
		static std::string	typepool[7];
		Zombie				*zombies;
		int 				size;
	public:
		ZombieHorde(int N);
		~ZombieHorde(void);

		void	announce(void) const;
};
