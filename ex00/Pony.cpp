/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:39:36 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/08 17:11:45 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void)
{
	setColor("None");
	setPaws(-1);
	setSize(-1);
	std::cout << "color:" << getColor();
	std::cout << ";paws:" << getPaws();
	std::cout << ";size:" << getSize();
	std::cout << ";address:" << &m_color;
	std::cout << ";create" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "color:" << getColor();
	std::cout << ";paws:" << getPaws();
	std::cout << ";size:" << getSize();
	std::cout << ";address:" << &m_color;
	std::cout << ";closed" << std::endl;
}

void		Pony::setColor(std::string color)
{
	m_color = color;
}

void		Pony::setPaws(int paws)
{
	m_paws = paws;
}

void		Pony::setSize(int size)
{
	m_size = size;
}

std::string	Pony::getColor(void)
{
	return (m_color);
}

int			Pony::getPaws(void)
{
	return (m_paws);
}

int			Pony::getSize(void)
{
	return (m_size);
}

void		Pony::displayInfo(void)
{
	std::cout << "color:" << getColor();
	std::cout << ";paws:" << getPaws();
	std::cout << ";size:" << getSize();
	std::cout << ";address:" << &m_color << std::endl;
}
