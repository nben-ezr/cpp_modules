/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/13 22:23:17 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/16 17:48:35 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "zombie.hpp"
class zombieEvent{

public:

	void	setZombieType(std::string type);
	zombie *newZombie(std::string name);
	zombie	*randomChump(void);
	zombie	bigBoiBoss(void);
	void	setEventDifficulty(int difficulty);
	int		getEventDifficulty(void) const;

private:
	std::string	_zombieType;
	int			_eventDifficulty;
	int			_waveZombies;
};

#endif