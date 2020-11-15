/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 23:16:39 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/15 01:25:45 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>

class Enemy{
	protected:
		int			_hp;
		std::string _type;

	public:
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const &other);
		virtual				~Enemy(){};
		Enemy&				operator = (Enemy const &other);
		std::string const	getType() const;
		int 				getHP() const;
		virtual void 		takeDamage(int dmg);
		
};

#endif