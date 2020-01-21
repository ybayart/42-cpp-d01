/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 17:36:25 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/08 19:33:45 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class	Zombie
{
	private:

	std::string		m_type;
	std::string		m_name;

	public:

//	Zombie(std::string name, std::string type);
	Zombie(void);
	void	advert(void);
	void	setName(std::string name);
	void	setType(std::string type);
};

#endif
