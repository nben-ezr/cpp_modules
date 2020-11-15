/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/14 23:13:26 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/14 23:23:15 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant();
		SuperMutant(const SuperMutant &other);
		~SuperMutant();
		SuperMutant& operator = (SuperMutant const &Source);
		void takeDamage(int dmg);
};

#endif