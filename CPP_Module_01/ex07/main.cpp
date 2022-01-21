/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:53:24 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/20 00:54:18 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

static int	open_fstreams(std::fstream& istream, std::fstream& ostream, char *fname)
{
	istream.open(fname, std::ios::in);
	ostream.open(strcat(fname, ".replace"), std::ios::out);
	
	if (!istream.is_open() || !ostream.is_open())
	{
		std::cout << "Error while opennig a file!" << std::endl;
		return (-1);
	}
	return (0);
}

static void	replace(std::string& line, char *s1, char *s2)
{
	size_t begin;
	size_t len;
	
	begin = line.find(s1);
	len = strlen(s1);
	while (begin != std::string::npos)
	{
		line.replace(begin, len, s2);
		begin = line.find(s1, begin);
	}
}

int main(int argc, char **argv)
{
	std::fstream	istream;
	std::fstream	ostream;
	std::string		line;
	char			*fname;
	char			*s1;
	char			*s2;
	
	if (argc != 4 || argv[1][0] == '\0' || argv[2][0] == '\0' || argv[3][0] == '\0')
	{
		std::cout << "Invalid arguments: Program takes 3 non-empty arguments!" << std::endl;
		return (-1);
	}

	fname = argv[1];
	s1 = strdup(argv[2]);
	s2 = strdup(argv[3]);

	if (open_fstreams(istream, ostream, fname))
		return (-1);
	while (getline(istream, line))
	{
		replace(line, s1, s2);
		ostream << line << std::endl;
	}
	istream.close();
	ostream.close();
}
