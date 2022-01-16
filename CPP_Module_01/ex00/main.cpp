/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 23:40:32 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/16 13:41:41 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony	*heapPony;

	heapPony = new Pony("Jack", "Iceland", 7);
	delete heapPony;
}

void	ponyOnTheStack(void)
{
	Pony	stackpony("Arthur", "Sweeden", 4);
}

int	main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
}
