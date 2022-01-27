/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:22:18 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/27 19:29:53 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain	*brain;
	public:
		Cat(void);
		Cat(const Cat& other);
		~Cat();

		Animal&	operator=(const Animal& other);
		void	makeSound(void) const;
		Brain	*getBrain(void) const;
};

