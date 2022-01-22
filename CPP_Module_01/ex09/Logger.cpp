/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 15:15:23 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/22 15:17:10 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(std::string logFile)
{
	this->logFile = logFile;
}

std::string	Logger::makeLogEntry(std::string const& message) const
{
	std::string	entry;
	std::string	currDate;
	time_t		currTime;
	char		*dt;

	currTime = time(NULL);
	dt = ctime(&currTime);
	currDate = dt;
	entry = "[ " + currDate.substr(0, currDate.length() - 1) + " ] " + message;

	return (entry);
}

void	Logger::logToConsole(std::string const& log) const
{
	std::cout << makeLogEntry(log) << std::endl;
}

void	Logger::logToFile(std::string const& log) const
{
	std::ofstream	stream;

	stream.open(this->logFile, std::ofstream::app);
	stream << makeLogEntry(log) << std::endl;
	stream.close();
}

void	Logger::log(std::string const& dest, std::string const& message) const
{
	void (Logger::*logDest[])(std::string const&) const =
	{
		&Logger::logToFile,
		&Logger::logToConsole
	};

	char	*destinations[] =
	{
		(char*)"file",
		(char*)"console"
	};

	for (int i = 0; i < 2; i++)
	{
		if (dest == destinations[i])
		{
			(this->*logDest[i])(message);
			return ;
		}
	}
	std::cout << "Invalid destination: Log to a file or the console." << std::endl;
}
