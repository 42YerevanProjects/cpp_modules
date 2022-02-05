/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:52:11 by shovsepy          #+#    #+#             */
/*   Updated: 2022/02/05 15:58:38 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>

int	main()
{
	std::set<int>		set;
	std::list<int>		list;
	std::deque<int>		deque;
	std::vector<int>	vector;

	for (int i = 0; i < 10; i++)
	{
		set.insert(i);
		list.push_back(i);
		deque.push_front(i);
		vector.push_back(i);
	}

	/* Testing with set */
	std::cout << "Testing easyfind with Set\n\nSet:";
	for (std::set<int>::iterator it = set.begin(); it != set.end(); it++)
		std::cout << ' ' << *it;

	std::set<int>::iterator set_it = easyfind(set, 0);
	std::cout << "\nFound:  " << *set_it << " followed by " << *(++set_it) << "\n" << std::endl;

	/* Testing with list */
	std::cout << "Testing easyfind with List\n\nList:";
	for (std::list<int>::iterator it = list.begin(); it != list.end(); it++)
		std::cout << ' ' << *it;

	std::list<int>::iterator list_it = easyfind(list, 1);
	std::cout << "\nFound:  " << *list_it << " followed by " << *(++list_it) << "\n" << std::endl;

	/* Testing with deque */
	std::cout << "Testing easyfind with Deque\n\nDeque:";
	for (std::deque<int>::iterator it = deque.begin(); it != deque.end(); it++)
		std::cout << ' ' << *it;

	std::deque<int>::iterator deque_it = easyfind(deque, 2);
	std::cout << "\nFound: " << *deque_it << " followed by " << *(++deque_it) << "\n" << std::endl;

	/* Testing with vector */
	std::cout << "Testing easyfind with Vector\n\nVector:";
	for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); it++)
		std::cout << ' ' << *it;

	std::vector<int>::iterator vector_it = easyfind(vector, 3);
	std::cout << "\nFound: " << *vector_it << " followed by " << *(++vector_it) << "\n" << std::endl;


	/* Testing with non-existent element */
	std::cout << "\nLet's try finding a non-element in the vector\n" << std::endl;

	std::cout << "Vector:";
	for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); it++)
		std::cout << ' ' << *it;

	std::vector<int>::iterator it = easyfind(vector, 42);
	std::cout << "\nIs 42 in the vector: " << (it != vector.end() ? "yes" : "no") << std::endl;

	return (0);
}
