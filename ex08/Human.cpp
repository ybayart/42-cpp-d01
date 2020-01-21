/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 21:04:43 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/09 22:16:03 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void	Human::meleeAttack(std::string const & target)
{
	std::cout << "Melee Attack to " << target << std::endl;
}

void	Human::rangedAttack(std::string const & target)
{
	std::cout << "Ranged Attack to " << target << std::endl;
}

void	Human::intimidatingAttack(std::string const & target)
{
	std::cout << "Intimidating Attack to " << target << std::endl;
}

void	Human::action(std::string const & action_name, std::string const & target)
{
	void		(Human::*funcPtr[3])(std::string const &) = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingAttack};
	std::string	index[3];
	int			i;

	index[0] = "meleeAttack";
	index[1] = "rangedAttack";
	index[2] = "intimidatingAttack";
	i = -1;
	while (++i < 3)
		if (index[i] == action_name)
			break ;
	(this->*funcPtr[i])(target);
}
