/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 22:07:04 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/09 22:15:24 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int		main(void)
{
	Logger	logger("out.log");

	logger.log("console", "toto");
	logger.log("file", "tadwato");
	logger.log("file", "tato");
	logger.log("file", "tafesfwato");
	logger.log("console", "esf");
	logger.log("console", "ato");
	logger.log("file", "tado");
}
