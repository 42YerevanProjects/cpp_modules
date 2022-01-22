/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 13:47:24 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/22 13:48:18 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int	main()
{
	Human h;

	std::cout<< "Attack by function pointers" << std::endl;

	h.action("meleeAttack", "Dragon");
	h.action("rangedAttack", "Dragon");
	h.action("intimidatingShout", "Dragon");
}
