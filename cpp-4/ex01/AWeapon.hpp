/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 21:47:32 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/15 01:28:55 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <iostream>

class AWeapon{
	protected:
		std::string _name;
		int 		_damage;
		int 		_AP_Cost;

	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(const AWeapon &other);
		virtual ~AWeapon(){};
		AWeapon& operator = (AWeapon const &Source);
		std::string const getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;

};

#endif