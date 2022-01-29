/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 01:37:08 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/28 01:42:35 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice(void);
		Ice(const Ice& other);
		~Ice(void);

		Ice&		operator=(const Ice& other);
		AMateria*	clone() const;
		void		use(ICharacter& target);
};
