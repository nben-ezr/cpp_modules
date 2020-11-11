/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/25 21:40:26 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/11 23:45:06 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int		main(void)
{
	srand(time(NULL));
	
	FragTrap	F1("Fraggie");
	ScavTrap	S1("Scavvie");
	NinjaTrap	N1("NinjaBoi");
	ClapTrap	C1("Clappie");
	N1.NinjaShoebox(F1);
	N1.NinjaShoebox(S1);
	N1.NinjaShoebox(N1);
	N1.NinjaShoebox(C1);
			
	return (0);
}