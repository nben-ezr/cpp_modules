/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/16 17:52:15 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/16 18:39:42 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include "zombie.hpp"

class	zombieHorde{

public:
	zombieHorde(int N);
	~zombieHorde();
	zombie	randomChump(void);
	void	setZombieType(std::string type);

private:
	std::string	_zombieType;
	zombie		*horde;
	int			amount;
};


#endif