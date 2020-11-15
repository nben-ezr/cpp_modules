/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 22:19:46 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/15 01:34:26 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(const PowerFist &other) : AWeapon(other.getName(), other.getAPCost(), other.getDamage())
{
}

PowerFist::~PowerFist()
{
}

PowerFist& PowerFist::operator = (PowerFist const &Source)
{
	_name = Source.getName();
	_damage = Source.getDamage();
	_AP_Cost = Source.getAPCost();
	return (*this);
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
