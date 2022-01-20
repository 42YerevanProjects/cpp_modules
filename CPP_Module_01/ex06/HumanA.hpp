/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:09:15 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/20 00:10:26 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA {
	private:
		std::string	name;
		Weapon		&weapon;
	public:
		HumanA(std::string name, Weapon& weapon);

		void	attack(void) const;
};
