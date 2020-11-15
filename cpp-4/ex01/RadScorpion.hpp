/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/14 23:25:52 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/15 02:04:49 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion();
		RadScorpion(const RadScorpion &other);
		~RadScorpion();
		RadScorpion& operator = (RadScorpion const &Source);
};

#endif