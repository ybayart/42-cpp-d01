/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 17:38:21 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/08 18:18:47 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	this->m_name = name;
	this->m_type = type;
	this->advert();
}

void	Zombie::advert(void)
{
	std::cout << "<" << this->m_name << " (" << this->m_type << ")> Braiiiiiiiiiiiiiinssssssss" << std::endl;
}
