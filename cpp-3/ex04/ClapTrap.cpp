/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 03:29:32 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/11 23:38:50 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_hitpoints = 100;
	this->_max_hitpoints = 100;
	this->_energy_points = 100;
	this->_max_energy_points = 100;
	this->_level = 1;
	this->_name = "PlebTrap";
	this->_melee_damage = 30;
	this->_ranged_damage = 20;
	this->_armor_dmg_reduction = 5;
	
	std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_hitpoints = 100;
	this->_max_hitpoints = 100;
	this->_energy_points = 100;
	this->_max_energy_points = 100;
	this->_level = 1;
	this->_name = name;
	this->_melee_damage = 30;
	this->_ranged_damage = 20;
	this->_armor_dmg_reduction = 5;
	
	std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "I'll die the way I lived: annoying!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ClapTrap_copy)
{
	this->_hitpoints = ClapTrap_copy._hitpoints;
	this->_max_hitpoints = ClapTrap_copy._max_energy_points;
	this->_energy_points = ClapTrap_copy._energy_points;
	this->_max_energy_points = ClapTrap_copy._max_energy_points;
	this->_level = ClapTrap_copy._level;
	this->_name = ClapTrap_copy._name;
	this->_melee_damage = ClapTrap_copy._melee_damage;
	this->_ranged_damage = ClapTrap_copy._ranged_damage;
	this->_armor_dmg_reduction = ClapTrap_copy._armor_dmg_reduction;
}

ClapTrap& ClapTrap::operator = (const ClapTrap ClapTrap_copy)
{
	this->_hitpoints = ClapTrap_copy._hitpoints;
	this->_max_hitpoints = ClapTrap_copy._max_energy_points;
	this->_energy_points = ClapTrap_copy._energy_points;
	this->_max_energy_points = ClapTrap_copy._max_energy_points;
	this->_level = ClapTrap_copy._level;
	this->_name = ClapTrap_copy._name;
	this->_melee_damage = ClapTrap_copy._melee_damage;
	this->_ranged_damage = ClapTrap_copy._ranged_damage;
	this->_armor_dmg_reduction = ClapTrap_copy._armor_dmg_reduction;
	return (*this);
}

std::string ClapTrap::getName(void) const
{
	return (this->_name);
}

void ClapTrap::rangedAttack(std::string const & target) const
{
	std::cout << "CL4P-TP " << this->_name << " attacks " << target << " with his ranged attack, dealing " << this->_ranged_damage << " damage!" << std::endl;
}


void ClapTrap::meleeAttack(std::string const & target) const
{
	std::cout << "CL4P-TP " << this->_name << " attacks " << target << " with his melee attack, dealing " << this->_melee_damage << " damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if ((int)amount - this->_armor_dmg_reduction >= this->_hitpoints)
	{
		std::cout << "CL4P-TP " << this->_name << " has been dealt " << this->_hitpoints << " damage! " << std::endl;
		this->_hitpoints = 0;
		std::cout << "Your CL4P-TP " << this->_name << " Has been obliterated!" << std::endl;
	}
	else if (amount >= this->_armor_dmg_reduction)
	{
		this->_hitpoints -= (int)amount - this->_armor_dmg_reduction;
		std::cout << "CL4P-TP " << this->_name << " has been dealt " << amount - this->_armor_dmg_reduction << " damage!" << std::endl << "Remaining HP: " << this->_hitpoints <<  std::endl;
	}
	else
	{
		std::cout << "The damage was too little to penetrate " << this->_name << "'s beautiful armor" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (amount + this->_hitpoints >= this->_max_hitpoints)
	{
		std::cout << "CL4P-TP " << this->_name << " has been fully repaired!" << std::endl;
		this->_hitpoints = this->_max_hitpoints;
	}
	else
	{
		this->_hitpoints += amount;
		std::cout << "CL4P-TP " << this->_name << " has been repaired by: " << amount << " HP!" << std::endl << "Remaining HP: " << this->_hitpoints << std::endl;
	}
}
