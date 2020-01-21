/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:46:49 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/08 17:17:57 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int		main(void)
{
	Pony	ponyOnTheStack;
	Pony	*ponyOnTheHeap = new Pony;

//	printf("ponyOnTheStack: %p\nponyOnTheHeap: %p\n", &ponyOnTheStack, ponyOnTheHeap);


	ponyOnTheStack.setColor("violet");
	ponyOnTheStack.setPaws(6);
	ponyOnTheStack.setSize(42);

	ponyOnTheHeap->setColor("orange");
	ponyOnTheHeap->setPaws(2);
	ponyOnTheHeap->setSize(187);

	ponyOnTheStack.displayInfo();
	ponyOnTheHeap->displayInfo();
	
	delete ponyOnTheHeap;
}
