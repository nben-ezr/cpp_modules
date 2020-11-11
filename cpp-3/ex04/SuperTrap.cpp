/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 23:58:15 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/12 00:49:03 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	this->_hitpoints = FragTrap::_hitpoints;
	this->_max_hitpoints = FragTrap::_max_hitpoints;
	this->_energy_points = NinjaTrap::_energy_points;
	this->_max_energy_points = NinjaTrap::_max_energy_points;
	this->_level = 1;
	this->_name = "PlebTrap";
	this->_melee_damage = NinjaTrap::_melee_damage;
	this->_ranged_damage = FragTrap::_ranged_damage;
	this->_armor_dmg_reduction = FragTrap::_armor_dmg_reduction;
	
	std::cout << "SUP3R-TP very very alive" << std::endl;
}

SuperTrap::SuperTrap(std::string name) : FragTrap(name), ClapTrap(name), NinjaTrap(name)
{
	this->_hitpoints = FragTrap::_hitpoints;
	this->_max_hitpoints = FragTrap::_max_hitpoints;
	this->_energy_points = NinjaTrap::_energy_points;
	this->_max_energy_points = NinjaTrap::_max_energy_points;
	this->_level = 1;
	this->_name = name;
	this->_melee_damage = NinjaTrap::_melee_damage;
	this->_ranged_damage = FragTrap::_ranged_damage;
	this->_armor_dmg_reduction = FragTrap::_armor_dmg_reduction;
	
	std::cout << "SUP3R-TP very very alive" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SUP3R-TP very very ded" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &SuperTrap_copy)
{
	this->_hitpoints = SuperTrap_copy._hitpoints;
	this->_max_hitpoints = SuperTrap_copy._max_energy_points;
	this->_energy_points = SuperTrap_copy._energy_points;
	this->_max_energy_points = SuperTrap_copy._max_energy_points;
	this->_level = SuperTrap_copy._level;
	this->_name = SuperTrap_copy._name;
	this->_melee_damage = SuperTrap_copy._melee_damage;
	this->_ranged_damage = SuperTrap_copy._ranged_damage;
	this->_armor_dmg_reduction = SuperTrap_copy._armor_dmg_reduction;
}

SuperTrap& SuperTrap::operator = (const SuperTrap SuperTrap_copy)
{
	this->_hitpoints = SuperTrap_copy._hitpoints;
	this->_max_hitpoints = SuperTrap_copy._max_energy_points;
	this->_energy_points = SuperTrap_copy._energy_points;
	this->_max_energy_points = SuperTrap_copy._max_energy_points;
	this->_level = SuperTrap_copy._level;
	this->_name = SuperTrap_copy._name;
	this->_melee_damage = SuperTrap_copy._melee_damage;
	this->_ranged_damage = SuperTrap_copy._ranged_damage;
	this->_armor_dmg_reduction = SuperTrap_copy._armor_dmg_reduction;
	return (*this);
}

void SuperTrap::rangedAttack(std::string const & target) const
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const & target) const
{
	NinjaTrap::meleeAttack(target);
}

void SuperTrap::takeDamage(unsigned int amount)
{
	if ((int)amount - this->_armor_dmg_reduction >= this->_hitpoints)
	{
		std::cout << "SUP3R-TP " << this->_name << " has been dealt " << this->_hitpoints << " damage! " << std::endl;
		this->_hitpoints = 0;
		std::cout << "Your SUP3R-TP " << this->_name << " Has been obliterated!" << std::endl;
	}
	else if (amount >= this->_armor_dmg_reduction)
	{
		this->_hitpoints -= (int)amount - this->_armor_dmg_reduction;
		std::cout << "SUP3R-TP " << this->_name << " has been dealt " << amount - this->_armor_dmg_reduction << " damage!" << std::endl << "Remaining HP: " << this->_hitpoints <<  std::endl;
	}
	else
	{
		std::cout << "The damage was too little to penetrate " << this->_name << "'s beautiful armor" << std::endl;
	}
}

void SuperTrap::beRepaired(unsigned int amount)
{
	if (amount + this->_hitpoints >= this->_max_hitpoints)
	{
		std::cout << "SUP3R-TP " << this->_name << " has been fully repaired!" << std::endl;
		this->_hitpoints = this->_max_hitpoints;
	}
	else
	{
		this->_hitpoints += amount;
		std::cout << "SUP3R-TP " << this->_name << " has been repaired by: " << amount << " HP!" << std::endl << "Remaining HP: " << this->_hitpoints << std::endl;
	}
}
