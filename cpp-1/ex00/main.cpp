/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/13 20:25:55 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/13 22:02:53 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pony.hpp"

int		main(void)
{
	pony	pony;

	pony.ponyOnTheHeap(10, 5, 8, "Claptrap");
	pony.ponyOnTheHeap(10, 5, 8, "Claptrap");
	pony.ponyOnTheStack(10, 5, 8, "Vlad");
	pony.ponyOnTheStack(10, 5, 8, "Vlad");
	system("leaks a.out");
	return (0);
}
