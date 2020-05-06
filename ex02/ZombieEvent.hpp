/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 17:46:14 by ybayart           #+#    #+#             */
/*   Updated: 2020/05/06 04:51:22 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <string>
# include <cstdlib>

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
