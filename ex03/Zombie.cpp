/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 17:38:21 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/08 19:29:26 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*Zombie::Zombie(std::string name, std::string type)
{
	this->m_name = name;
	this->m_type = type;
	this->advert();
}*/

Zombie::Zombie(void) {}

void	Zombie::advert(void)
{
	std::cout << "<" << this->m_name << " (" << this->m_type << ")> Braiiiiiiiiiiiiiinssssssss" << std::endl;
}

void	Zombie::setName(std::string name)
{
	m_name = name;
}

void	Zombie::setType(std::string type)
{
	m_type = type;
}
