/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:47:18 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/25 15:50:53 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap& other);
		ScavTrap(void);
		~ScavTrap(void);

		using	ClapTrap::operator=;
		void	attack(const std::string& target);
		void	guardGate(void) const;
};
