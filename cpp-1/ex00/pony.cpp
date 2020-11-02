/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/13 20:25:58 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/13 22:04:36 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pony.hpp"

void	pony::ponyOnTheStack(int weight, int height, int size, std::string name)
{
	pony	pony_stack;

	pony::_amount += 1;
	pony::_height = height;
	pony::_name = name;
	pony::_size = size;
	pony::_initial_weight = weight;
	pony::_added_weight += 1;

	std::cout << pony::_name << " ate a carrot. It now weighs: " << pony::_initial_weight + pony::_added_weight << " Kilograms." << std::endl;
	return ;
}

void	pony::ponyOnTheHeap(int weight, int height, int size, std::string name)
{
	pony	*pony_stack;
	
	pony_stack = new pony;
	pony::_amount += 1;
	pony::_height = height;
	pony::_name = name;
	pony::_size = size;
	pony::_initial_weight = weight;
	pony::_added_weight -= 1;

	std::cout << pony::_name << " ran a mile. It now weighs: " << pony::_initial_weight + pony::_added_weight << " Kilograms." << std::endl;
	if (pony_stack != NULL)
	{
		delete pony_stack;
	}
	return ;
}

std::string	pony::getNamePony(void)
{
	return (pony::_name);
}

int pony::_amount = 0;
int pony::_added_weight = 0;