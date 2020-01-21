/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 20:46:45 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/09 20:28:21 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon)
{
	setType(weapon);
}

std::string		Weapon::getType(void)
{
	return (m_type);
}

void			Weapon::setType(std::string weapon)
{
	m_type = weapon;
}
