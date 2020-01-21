/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 20:08:08 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/09 20:27:28 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	m_name = name;
	m_weapon = &weapon;
}

void	HumanA::attack(void)
{
	std::cout << m_name << " attacks with his " << m_weapon->getType() << std::endl;
}
