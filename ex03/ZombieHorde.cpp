/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 18:37:25 by ybayart           #+#    #+#             */
/*   Updated: 2020/04/30 04:16:31 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	int			i;
	std::string	names[] = {"toto", "tata", "tutu", "titi", "tete"};
	std::string	type = "lost";

	m_nbZombie = n;
	m_horde = new Zombie[n];
	i = -1;
	while (++i < n)
	{
		m_horde[i].setName(names[std::rand() % 5]);
		m_horde[i].setType(type);
	}
}

void	ZombieHorde::advert(void)
{
	int		i;

	i = -1;
	while (++i < m_nbZombie)
		m_horde[i].advert();
}

ZombieHorde::~ZombieHorde(void)
{
	delete[] this->m_horde;
}
