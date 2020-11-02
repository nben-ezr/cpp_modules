/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/16 17:52:12 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/16 18:44:18 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "zombieHorde.hpp"
#include "zombie.hpp"

zombieHorde::zombieHorde(int N)
{
	this->horde = new zombie[N];
	srand(time(0));
	this->setZombieType("horde");
	for (int i = 0; i < N; i++)
	{
		horde[i] = this->randomChump();
		horde[i].announce();
	}
}

zombieHorde::~zombieHorde()
{
	delete[]	this->horde;
}

void	zombieHorde::setZombieType(std::string type)
{
	this->_zombieType = type;
	return ;
}

zombie	zombieHorde::randomChump(void)
{
	int			random;
	std::string	name;
	zombie		hordeZombie;

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
	hordeZombie.name = name;
	hordeZombie.type = this->_zombieType;
	return (hordeZombie);
}
