/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/16 20:44:05 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/19 21:21:54 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
class	Weapon{

public:
	Weapon(std::string weapon_input) : _type(weapon_input)
	{
	}
	
	const std::string&		getType(void) const;
	void					setType(std::string type);
	
private:
	std::string _type;
};

#endif