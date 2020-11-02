/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/16 20:44:07 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/19 21:39:13 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "weapon.hpp"
class	HumanB{

public:
	HumanB(std::string name) : name(name)
	{
	}

	void 	attack() const;
	void	setWeapon(Weapon& weapon);

private:
	std::string				name;
	Weapon*			HumanB_Weapon;
};

#endif