/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 03:29:22 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/12 22:54:47 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <cmath>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		virtual ~ClapTrap();
		ClapTrap(const ClapTrap &ClapTrap);
		ClapTrap& operator = (const ClapTrap &ClapTrap_copy);
		std::string getName(void) const;
		virtual void rangedAttack(std::string const & target) const;
 		virtual void meleeAttack(std::string const & target) const;
 		virtual void takeDamage(unsigned int amount);
		virtual void beRepaired(unsigned int amount);
		
	protected:
		int			_hitpoints;
		int			_max_hitpoints;
		int			_energy_points;
		int			_max_energy_points;
		int			_level;
		std::string _name;
		int			_melee_damage;
		int			_ranged_damage;
		int			_armor_dmg_reduction;
		int			*woo;
};


#endif