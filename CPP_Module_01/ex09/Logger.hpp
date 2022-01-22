/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 14:59:23 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/22 15:02:10 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

class Logger {
	private:
		std::string	logFile;

		void		logToConsole(std::string const& log) const;
		void		logToFile(std::string const& log) const;
		std::string	makeLogEntry(std::string const& message) const;
	public:
		Logger(std::string logFile);

		void	log(std::string const& dest, std::string const& message) const;	
};
