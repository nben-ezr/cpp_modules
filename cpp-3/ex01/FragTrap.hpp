/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/25 21:40:27 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/12 22:56:29 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <cmath>

class FragTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(const FragTrap &FragTrap);
		FragTrap& operator = (const FragTrap &FragTrap_copy);
		void rangedAttack(std::string const & target) const;
 		void meleeAttack(std::string const & target) const;
 		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void vaulthunter_dot_exe(std::string const & target);

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
};


#endif