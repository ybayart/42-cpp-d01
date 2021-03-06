/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 17:35:54 by ybayart           #+#    #+#             */
/*   Updated: 2020/04/30 04:14:37 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main(void)
{
	ZombieEvent	event;
	int			i;

	event.setZombieType("living");
	Zombie		*zomb1 = event.newZombie("Bob le bricoleur");
	Zombie		*zomb2 = event.newZombie("OuiOui le taxi");

	std::cout << std::endl;
	i = -1;
	event.setZombieType("Missing");
	while (++i < 10)
		event.randomChump();

	delete zomb1;
	delete zomb2;
}
