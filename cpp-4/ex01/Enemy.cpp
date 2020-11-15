/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 23:11:51 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/15 02:10:47 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type)
{
}

Enemy::Enemy(const Enemy &other) : _hp(other._hp), _type(other._type)
{
}

Enemy& Enemy::operator = (Enemy const &Source)
{
	_hp = Source._hp;
	_type = Source._type;
	return (*this);
}

std::string const Enemy::getType() const
{
	return (_type);
}

int Enemy::getHP() const
{
	return (_hp);
}

void Enemy::takeDamage(int dmg)
{
	if (_hp > 0)
	{
		_hp -= dmg;
		if (_hp < 0)
			_hp = 0;
	}
	std::cout << getType() << " is at: " << getHP() << " HP!" << std::endl;
}