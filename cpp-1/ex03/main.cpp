/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 20:59:57 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/16 18:20:14 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"
#include "zombieHorde.hpp"

int		main(void)
{
	zombieHorde	horde(5);
	
	system("leaks a.out");
	return (0);
}
