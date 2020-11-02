/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/16 20:44:12 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/19 21:25:13 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack() const
{
	std::cout <<  this->_name << " attacks with his " << this->_HumanA_Weapon.getType() << std::endl;
}
