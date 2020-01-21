/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:33:00 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/08 17:11:59 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <string>
#include <iostream>

class	Pony
{
	private:

	std::string		m_color;
	int				m_paws;
	int				m_size;

	public:

	Pony();
	~Pony();
	void			setColor(std::string color);
	void			setPaws(int paws);
	void			setSize(int size);
	std::string		getColor(void);
	int				getPaws(void);
	int				getSize(void);
	void			displayInfo(void);
};

#endif
