/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 20:49:25 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/09 20:27:15 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class	HumanA
{
	private:
	
	Weapon		*m_weapon;
	std::string	m_name;

	public:
	HumanA(std::string name, Weapon &weapon);
	void		attack(void);
};

#endif
