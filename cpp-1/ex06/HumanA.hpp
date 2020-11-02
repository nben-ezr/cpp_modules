/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/16 20:44:11 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/19 21:30:40 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include  "weapon.hpp"
class	HumanA{

public:
	HumanA(std::string name, Weapon& Input_Weapon) : _name(name), _HumanA_Weapon(Input_Weapon)
	{
	}

	void attack() const;

private:
	std::string				_name;
	const Weapon&			_HumanA_Weapon;
};

#endif