/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/25 21:40:26 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/09 03:20:29 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	srand(time(NULL));
	
	FragTrap	F1("ClapTrap");
	ScavTrap	S1("Scavvie");

	F1.meleeAttack("Ugly Jack");
	F1.rangedAttack("Pyro Pete");
	F1.vaulthunter_dot_exe("Crawmerax");
	F1.vaulthunter_dot_exe("Crawmerax");
	F1.vaulthunter_dot_exe("Crawmerax");
	F1.vaulthunter_dot_exe("Crawmerax");
	F1.vaulthunter_dot_exe("Crawmerax");
	F1.vaulthunter_dot_exe("Crawmerax");
	F1.takeDamage(4); //no damage
	F1.takeDamage(30); //25  damage, 75 hp left
	F1.takeDamage(90); //85 damage, -10 hp (ded boi)
	F1.beRepaired(20); //back to 20 hp
	F1.beRepaired(200); //220 hp, 120 over max
	F1.takeDamage(105);

	S1.meleeAttack("Putin");
	S1.rangedAttack("Kim Jong Un");
	S1.takeDamage(4); //no damage
	S1.takeDamage(30); //25  damage, 75 hp left
	S1.takeDamage(90); //85 damage, -10 hp (ded boi)
	S1.beRepaired(20); //back to 20 hp
	S1.beRepaired(200); //220 hp, 120 over max
	S1.takeDamage(105);
	S1.challengeNewcomer(3);

	return (0);
}