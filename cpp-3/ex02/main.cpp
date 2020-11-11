/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/25 21:40:26 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/11 23:13:20 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	srand(time(NULL));
	
//	FragTrap	F1("Fraggie");
//	ScavTrap	S1("Scavvie");
	ClapTrap* ClapTrap = new FragTrap;
	delete ClapTrap;
	return (0);
}