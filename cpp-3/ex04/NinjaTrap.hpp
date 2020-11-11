/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 23:19:28 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/12 00:08:53 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap(std::string name);
		~NinjaTrap();
		NinjaTrap(const NinjaTrap &NinjaTrap);
		NinjaTrap& operator = (const NinjaTrap NinjaTrap_copy);
		void NinjaShoebox(ClapTrap const &ClapTrap);
		void NinjaShoebox(FragTrap const &ClapTrap);
		void NinjaShoebox(ScavTrap const &ClapTrap);
		void NinjaShoebox(NinjaTrap const &ClapTrap);
		void rangedAttack(std::string const & target) const;
 		void meleeAttack(std::string const & target) const;
 		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};


#endif