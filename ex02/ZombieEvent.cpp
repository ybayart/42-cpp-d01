/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 18:00:37 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/08 18:28:21 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type)
{
	this->m_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	return new Zombie(name, this->m_type);
}

void	ZombieEvent::randomChump(void)
{
	std::string		names[] = {"Michael Jackson", "Bob Marley", "Moise", "Razmo", "Rapido", "Jobs"};
	std::string		name = names[std::rand() % 6];

	Zombie(name, this->m_type);
}
