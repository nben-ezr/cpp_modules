/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/13 22:23:15 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/16 17:46:23 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "zombieEvent.hpp"
#include "zombie.hpp"

int		zombieEvent::getEventDifficulty(void) const
{
	return (this->_eventDifficulty);
}

void	zombieEvent::setEventDifficulty(int difficulty)
{
	this->_eventDifficulty = difficulty;
}

void	zombieEvent::setZombieType(std::string type)
{
	this->_zombieType = type;
	return ;
}

zombie *zombieEvent::newZombie(std::string name)
{
	zombie	*generateNewZombie;

	generateNewZombie = new zombie;
	generateNewZombie->type = this->_zombieType;
	generateNewZombie->name = name;
	return (generateNewZombie);
}

zombie	*zombieEvent::randomChump(void)
{
	int			random;
	std::string	name;

	random = rand() % 7;
	if (random == 0)
		name = "Abraham Lincoln";
	if (random == 1)
		name = "John F. Kennedy";
	if (random == 2)
		name = "Benjamin Franklin";
	if (random == 3)
		name = "Theodore Roosevelt";
	if (random == 4)
		name = "George Washington";
	if (random == 5)
		name = "Thomas Jefferson";
	if (random == 6)
		name = "Ronald Reagan";
	return (this->newZombie(name));
}

zombie	zombieEvent::bigBoiBoss(void)
{
	zombie	boss;

	boss.name = "Brutus";
	boss.type = "BigBoi";
	return (boss);
}
