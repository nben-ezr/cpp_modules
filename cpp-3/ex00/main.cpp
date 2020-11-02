/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/25 21:40:26 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/26 21:03:00 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	srand(time(NULL));
	
	FragTrap	V1("ClapTrap");

	V1.meleeAttack("Ugly Jack");
	V1.rangedAttack("Pyro Pete");
	V1.vaulthunter_dot_exe("Crawmerax");
	V1.vaulthunter_dot_exe("Crawmerax");
	V1.vaulthunter_dot_exe("Crawmerax");
	V1.vaulthunter_dot_exe("Crawmerax");
	V1.vaulthunter_dot_exe("Crawmerax");
	V1.vaulthunter_dot_exe("Crawmerax");
	V1.takeDamage(4); //no damage
	V1.takeDamage(30); //25  damage, 75 hp left
	V1.takeDamage(90); //85 damage, -10 hp (ded boi)
	V1.beRepaired(20); //back to 20 hp
	V1.beRepaired(200); //220 hp, 120 over max
	V1.takeDamage(105);

	return (0);
}