/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 22:13:32 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/20 22:14:41 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() 
{
	neurons = 0;
}

Brain::Brain(unsigned long n) : neurons(n) {}

unsigned long	Brain::get_neurons() const
{
	return (this->neurons);
}

void	Brain::set_neurons(unsigned long n)
{
	this->neurons = n;
}

std::string		Brain::identify() const
{
	std::stringstream ptr_address;

	ptr_address << this;
	return (ptr_address.str());
}
