/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 17:46:14 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/08 18:22:26 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <string>

class	ZombieEvent
{
	private:

	std::string		m_type;
	std::string		m_name;

	public:

	void			setZombieType(std::string type);
	Zombie			*newZombie(std::string name);
	void			randomChump(void);
};

#endif
