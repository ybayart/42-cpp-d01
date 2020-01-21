/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 21:07:34 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/09 21:51:28 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int		main(void)
{
	Human		human;
	std::string	target;

	target = "Chuck Norris";
	human.action("meleeAttack", target);
	human.action("rangedAttack", target);
	human.action("intimidatingAttack", target);
}
