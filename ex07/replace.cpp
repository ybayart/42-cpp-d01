/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 20:33:52 by ybayart           #+#    #+#             */
/*   Updated: 2020/05/03 15:09:39 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int		main(int argc, char **argv)
{
	std::string		search;
	std::string		replace;
	std::string		line;
	size_t			len;
	size_t			pos;
	
	if (argc != 4)
	{
		std::cerr << "Invalid arguments" << std::endl;
		return (1);
	}
	search = argv[2];
	replace = argv[3];
	if ((len = search.length()) == 0 || search == replace)
		return (1);
	std::ifstream	in(argv[1]);
	std::ofstream	out(argv[1] + std::string(".replace"));
	if (!in || !out)
	{
		std::cerr << "Could not open file" << std::endl;
		return (1);
	}
	while (std::getline(in, line))
	{
		while (1)
		{
			if ((pos = line.find(search)) != std::string::npos)
				line.replace(pos, len, replace);
			else
				break ;
		}
		out << line << std::endl;
	}
	return (0);
}
