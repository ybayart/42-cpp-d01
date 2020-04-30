/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 18:34:17 by ybayart           #+#    #+#             */
/*   Updated: 2020/04/30 04:16:46 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

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
