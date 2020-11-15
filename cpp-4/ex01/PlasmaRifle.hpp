/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 22:09:59 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/15 01:26:41 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon{
	public:
		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle &other);
		~PlasmaRifle();
		PlasmaRifle& operator = (PlasmaRifle const &Source);
		void attack() const;

};

#endif