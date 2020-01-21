/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 20:05:25 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/09 20:27:22 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class	HumanB
{
	private:
	
	Weapon		*m_weapon;
	std::string	m_name;

	public:
	HumanB(std::string name);
	void		attack(void);
	void		setWeapon(Weapon &weapon);
};

#endif
