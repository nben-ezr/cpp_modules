/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/16 20:44:09 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/19 21:39:39 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack() const
{
	std::cout <<  this->name << " attacks with his " << this->HumanB_Weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->HumanB_Weapon = &weapon;
}
