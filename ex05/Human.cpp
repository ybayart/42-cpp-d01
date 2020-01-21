/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 20:07:38 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/08 20:46:36 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void)
{
	Brain	m_brain;
}

Brain	*Human::identify(void)
{
	return (this->m_brain.identify());
}

Brain	&Human::getBrain(void)
{
	return (this->m_brain);
}
