/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 15:43:31 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/22 15:45:14 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int	main()
{
	Logger logger("logfile");

	logger.log("console", "First Log!");
	logger.log("file", "Logging into the file!");
	logger.log("file", "Second line of the logfile!");
	logger.log("console", "Last Log!");
}
