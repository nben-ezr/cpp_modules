/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 17:30:25 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/12 21:37:58 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Serf.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	
	Victim jim("Jimmy");
	Peon joe("Joe");
//	Serf bob("Bob");
	
	std::cout << robert << jim << joe; //<< bob;
	
	robert.polymorph(jim);
	robert.polymorph(joe);
//	robert.polymorph(bob);
	return 0;
}