/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 22:13:40 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/15 01:26:57 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public AWeapon{
	public:
		PowerFist();
		PowerFist(const PowerFist &other);
		~PowerFist();
		PowerFist& operator = (PowerFist const &Source);
		void attack() const;

};

#endif