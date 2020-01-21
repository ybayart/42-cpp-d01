/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 21:47:39 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/09 22:14:10 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <string>
# include <iostream>
# include <fstream>

class	Logger
{
	private:

	std::ofstream	m_file;
	void			logToConsole(std::string log);
	void			logToFile(std::string log);
	std::string		makeLogEntry(std::string log);

	public:

	Logger(std::string filename);
	void			log(std::string const &dest, std::string const &message);
};

#endif
