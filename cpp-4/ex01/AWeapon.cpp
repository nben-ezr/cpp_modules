/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 23:03:20 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/15 01:14:24 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _AP_Cost(apcost), _damage(damage)
{
}

AWeapon::AWeapon(const AWeapon &other) : _name(other._name), _AP_Cost(other._AP_Cost), _damage(other._damage)
{
}

AWeapon& AWeapon::operator = (AWeapon const &Source)
{
	_name = Source._name;
	_AP_Cost = Source._AP_Cost;
	_damage = Source._damage;
	return (*this);
}

std::string const AWeapon::getName() const
{
	return (_name);	
}

int AWeapon::getAPCost() const
{
	return (_AP_Cost);
}

int AWeapon::getDamage() const
{
	return (_damage);	
}
