/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 19:44:06 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/08 20:02:57 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int		main(void)
{
	std::string		brain = "HI THIS IS BRAIN";
	std::string&	rbrain(brain);
	std::string*	pbrain;

	pbrain = &brain;

	std::cout << rbrain << std::endl << *pbrain << std::endl;
}
