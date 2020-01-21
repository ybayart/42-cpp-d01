/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reading.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 12:36:27 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/11 13:09:58 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.hpp"

void	ft_reading(char *name, char *file)
{
	std::ifstream	in;
	std::string		line;

	if (file == 0)
	{
		while (std::getline(std::cin, line))
			std::cout << line << std::endl;
	}
	else
	{
		in.open(file);
		if (!in)
			std::cerr << basename(name) << ": " << file << ": " << strerror(errno) << std::endl;
		while (std::getline(in, line))
			std::cout << line << std::endl;
	}
}
