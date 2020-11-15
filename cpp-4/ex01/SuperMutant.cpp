/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/14 23:13:28 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/15 02:09:35 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &other) : Enemy(other.getHP(), other.getType())
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant& SuperMutant::operator = (SuperMutant const &Source)
{
	_hp = Source.getHP();
	_type= Source.getType();
	return (*this);
}

void SuperMutant::takeDamage(int dmg)
{
	if (dmg > 3)
		dmg -= 3;
	else
		dmg = 0;
	if (_hp > 0)
	{
		_hp -= dmg;
		if (_hp < 0)
			_hp = 0;
	}
	std::cout << getType() << " is at: " << getHP() << " HP!" << std::endl;
}