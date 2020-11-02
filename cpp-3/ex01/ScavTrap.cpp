/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 21:14:39 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/26 22:16:23 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->_hitpoints = 100;
	this->_max_hitpoints = 100;
	this->_energy_points = 50;
	this->_max_energy_points = 5;
	this->_level = 1;
	this->_name = name;
	this->_melee_damage = 20;
	this->_ranged_damage = 15;
	this->_armor_dmg_reduction = 3;
	
	std::cout << "Hey everybody! Check out my package!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

void ScavTrap::rangedAttack(std::string const & target) const
{
	std::cout << "SC4V-TP " << this->_name << " launches a plasma beam at " << target << " , dealing " << this->_ranged_damage << " damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target) const
{
	std::cout << "SC4V-TP " << this->_name << " slashes at " << target << " , dealing " << this->_melee_damage << " damage!" << std::endl;
}
