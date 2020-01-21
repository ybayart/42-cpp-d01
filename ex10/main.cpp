/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 12:04:57 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/11 13:09:56 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.hpp"

int		main(int argc, char **argv)
{
	int				i;

	if (argc == 1)
		ft_reading(argv[0], 0);
	else
	{
		i = 0;
		while (++i < argc)
			ft_reading(argv[0], argv[i]);
	}
	return (0);
}
