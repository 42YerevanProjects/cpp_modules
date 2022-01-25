/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 21:55:18 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/24 23:01:53 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class ClapTrap {
	private:
		std::string		name;
		unsigned int	hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDamage;
	public:
		ClapTrap(void);
		ClapTrap(const ClapTrap& other);
		ClapTrap(std::string name);
		~ClapTrap(void);

		ClapTrap&		operator=(const ClapTrap& other);

		const std::string&	getName(void) const;
		unsigned int	getHitPoints(void) const;
		unsigned int	getEnergyPoints(void) const;
		unsigned int	getAttackDamage(void) const;
		void			setName(const std::string& name);
		void			setHitPoints(unsigned int hitPoints);
		void			setEnergyPoints(unsigned int energyPoints);
		void			setAttackDamage(unsigned int damage);

		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};
