/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 21:14:36 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/12 22:56:42 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "FragTrap.hpp"

class ScavTrap : public FragTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(const ScavTrap &ScavTrap);
		ScavTrap& operator = (const ScavTrap &ScavTrap_copy);
		void rangedAttack(std::string const & target) const;
 		void meleeAttack(std::string const & target) const;
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void challengeNewcomer(int challengeAmount) const;
		void trivia(void) const;
		void guess_number(void) const;
};

#endif