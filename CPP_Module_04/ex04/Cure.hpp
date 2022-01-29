/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 01:50:08 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/28 01:53:35 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure(void);
		Cure(const Cure& other);
		~Cure(void);

		Cure&            operator=(const Cure& other);
		AMateria*       clone() const;
		void            use(ICharacter& target);
};
