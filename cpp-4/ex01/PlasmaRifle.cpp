/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 22:14:15 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/15 01:34:53 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &other) : AWeapon(other.getName(), other.getAPCost(), other.getDamage())
{
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle& PlasmaRifle::operator = (PlasmaRifle const &Source)
{
	_name = Source.getName();
	_damage = Source.getDamage();
	_AP_Cost = Source.getAPCost();
	return (*this);
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
