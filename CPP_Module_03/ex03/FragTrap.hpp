/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 19:49:18 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/25 19:57:53 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& other);
		FragTrap(void);
		~FragTrap(void);

		using   ClapTrap::operator=;
		void	highFivesGuys(void) const;
};
