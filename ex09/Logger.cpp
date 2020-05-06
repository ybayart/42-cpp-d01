/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 21:52:06 by ybayart           #+#    #+#             */
/*   Updated: 2020/05/06 04:54:48 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(std::string filename)
{
	m_file.open(filename.c_str());
}

void		Logger::logToConsole(std::string log)
{
	std::cout << log << std::endl;
}

void		Logger::logToFile(std::string log)
{
	if (m_file)
		m_file << log << std::endl;
}

std::string	Logger::makeLogEntry(std::string log)
{
	std::string		out;
	time_t			timestamp;
	char			buff[16];

	time(&timestamp);
	strftime(buff, sizeof(buff), "%Y%m%d_%H%M%S", localtime(&timestamp));
	out = std::string("[") + std::string(buff) + std::string("] ") + log;
	return (out);
}

void		Logger::log(std::string const &dest, std::string const &message)
{
	void		(Logger::*funcPtr[2])(std::string) = {&Logger::logToConsole, &Logger::logToFile};
	std::string	index[2] = {"console", "file"};
	int			i;

	i = -1;
	while (++i < 2)
		if (index[i] == dest)
			break ;
	(this->*funcPtr[i])(this->makeLogEntry(message));
}
