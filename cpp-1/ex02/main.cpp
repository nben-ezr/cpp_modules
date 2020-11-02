/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 20:59:57 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/16 19:15:32 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"
#include "zombieEvent.hpp"

int		main(void)
{
	zombieEvent event;
	zombie		stackZombie;
	zombie		*heapZombie;
	int			randomAmount;

	srand(time(0));
	randomAmount = rand() % 4 + 1;
	event.setEventDifficulty(0);
	for (int i = 0 - (event.getEventDifficulty() * 2); i < randomAmount; i++)
	{
		event.setZombieType("Wave Zombie");
		heapZombie = event.randomChump();
		heapZombie->announce();
		delete heapZombie;
	}
	stackZombie = event.bigBoiBoss();
	stackZombie.announce();
	system("leaks a.out");
}
