/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 18:34:17 by ybayart           #+#    #+#             */
/*   Updated: 2020/05/06 04:51:42 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <cstdlib>
# include "Zombie.hpp"

class	ZombieHorde
{
	private:

	Zombie	*m_horde;
	int		m_nbZombie;

	public:
	
	ZombieHorde(int n);
	~ZombieHorde();
	void	advert(void);
};

#endif
