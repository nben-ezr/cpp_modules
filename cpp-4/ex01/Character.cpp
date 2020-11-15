/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/14 23:32:34 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/15 02:24:59 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Enemy.hpp"

Character::Character(std::string const & name) : _name(name), _AP(40)
{
}

Character::~Character()
{
}

void Character::recoverAP()
{
	if (_AP < 40)
	{
		if (_AP <= 30)
		{
			_AP += 10;
		}
		else
		{
			_AP = 40;
		}
	}
	std::cout << getName() << " has: " << getAP() << " AP!" << std::endl;
}

void Character::equip(AWeapon* Char_Weap)
{
	_Char_wep = Char_Weap;
}

void Character::attack(Enemy* Enemy)
{
	if (_Char_wep != NULL)
	{
		if (_Char_wep->getAPCost() < _AP)
		{
			std::cout << _name << " attacks " << Enemy->getType() << " with a " << _Char_wep->getName() << std::endl;
			_Char_wep->attack();
			_AP -= _Char_wep->getAPCost();
			Enemy->takeDamage(_Char_wep->getDamage());
			if (Enemy->getHP() <= 0)
				delete Enemy;
		}
		else
			std::cout << "Character has too low mana to perform attack with " << _Char_wep->getName() << std::endl; 
	}
	else
		std::cout << "You have no weapon to attack with!" << std::endl;
}

std::string const Character::getName() const
{
	return (_name);
}

int	Character::getAP() const
{
	return (_AP);
}

AWeapon* Character::getAWeapon() const
{
	return (_Char_wep);
}

std::ostream& operator << (std::ostream& o, Character const &output)
{
	if (output.getAWeapon() != NULL)
		o << output.getName() << " has " << output.getAP() << " AP and wields a " << output.getAWeapon()->getName() << std::endl; 
	else
		o << output.getName() << " has " << output.getAP() << " AP and is unarmed " << std::endl; 
	return (o);
}