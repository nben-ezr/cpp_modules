/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 23:20:53 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/11 23:46:15 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
	this->_hitpoints = 60;
	this->_max_hitpoints = 60;
	this->_energy_points = 120;
	this->_max_energy_points = 120;
	this->_level = 1;
	this->_name = "PlebTrap";
	this->_melee_damage = 60;
	this->_ranged_damage = 5;
	this->_armor_dmg_reduction = 0;
	
	std::cout << "Issa NinjaBoi ayy" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
{
	this->_hitpoints = 60;
	this->_max_hitpoints = 60;
	this->_energy_points = 120;
	this->_max_energy_points = 120;
	this->_level = 1;
	this->_name = name;
	this->_melee_damage = 60;
	this->_ranged_damage = 5;
	this->_armor_dmg_reduction = 0;
	
	std::cout << "Issa NinjaBoi ayy" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaBoi ded" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &NinjaTrap_copy)
{
	this->_hitpoints = NinjaTrap_copy._hitpoints;
	this->_max_hitpoints = NinjaTrap_copy._max_energy_points;
	this->_energy_points = NinjaTrap_copy._energy_points;
	this->_max_energy_points = NinjaTrap_copy._max_energy_points;
	this->_level = NinjaTrap_copy._level;
	this->_name = NinjaTrap_copy._name;
	this->_melee_damage = NinjaTrap_copy._melee_damage;
	this->_ranged_damage = NinjaTrap_copy._ranged_damage;
	this->_armor_dmg_reduction = NinjaTrap_copy._armor_dmg_reduction;
}

NinjaTrap& NinjaTrap::operator = (const NinjaTrap NinjaTrap_copy)
{
	this->_hitpoints = NinjaTrap_copy._hitpoints;
	this->_max_hitpoints = NinjaTrap_copy._max_energy_points;
	this->_energy_points = NinjaTrap_copy._energy_points;
	this->_max_energy_points = NinjaTrap_copy._max_energy_points;
	this->_level = NinjaTrap_copy._level;
	this->_name = NinjaTrap_copy._name;
	this->_melee_damage = NinjaTrap_copy._melee_damage;
	this->_ranged_damage = NinjaTrap_copy._ranged_damage;
	this->_armor_dmg_reduction = NinjaTrap_copy._armor_dmg_reduction;
	return (*this);
}

void NinjaTrap::NinjaShoebox(ClapTrap const &ClapTrap)
{
	std::cout << this->_name << " Opens door for " << ClapTrap.getName() << std::endl;
}

void NinjaTrap::NinjaShoebox(ScavTrap const &ScavTrap)
{
	std::cout << this->_name << " Scavenges loot from " << ScavTrap.getName() << std::endl;
}

void NinjaTrap::NinjaShoebox(FragTrap const &FragTrap)
{
	std::cout << this->_name << " Frags " << FragTrap.getName() << std::endl;
}

void NinjaTrap::NinjaShoebox(NinjaTrap const &NinjaTrap)
{
		std::cout << this->_name << " Backstabs his homie " << NinjaTrap.getName() << std::endl;
}

void NinjaTrap::rangedAttack(std::string const & target) const
{
	std::cout << "N1NJ4-TP " << this->_name << " launches a plasma beam at " << target << " , dealing " << this->_ranged_damage << " damage!" << std::endl;
}

void NinjaTrap::meleeAttack(std::string const & target) const
{
	std::cout << "N1NJ4-TP " << this->_name << " slashes at " << target << " , dealing " << this->_melee_damage << " damage!" << std::endl;
}

void NinjaTrap::takeDamage(unsigned int amount)
{
	if ((int)amount - this->_armor_dmg_reduction >= this->_hitpoints)
	{
		std::cout << "N1NJ4-TP " << this->_name << " has been dealt " << this->_hitpoints << " damage! " << std::endl;
		this->_hitpoints = 0;
		std::cout << "Your N1NJ4-TP " << this->_name << " Has been obliterated!" << std::endl;
	}
	else if (amount >= this->_armor_dmg_reduction)
	{
		this->_hitpoints -= (int)amount - this->_armor_dmg_reduction;
		std::cout << "N1NJ4-TP " << this->_name << " has been dealt " << amount - this->_armor_dmg_reduction << " damage!" << std::endl << "Remaining HP: " << this->_hitpoints <<  std::endl;
	}
	else
	{
		std::cout << "The damage was too little to penetrate " << this->_name << "'s beautiful armor" << std::endl;
	}
}

void NinjaTrap::beRepaired(unsigned int amount)
{
	if (amount + this->_hitpoints >= this->_max_hitpoints)
	{
		std::cout << "N1NJ4-TP " << this->_name << " has been fully repaired!" << std::endl;
		this->_hitpoints = this->_max_hitpoints;
	}
	else
	{
		this->_hitpoints += amount;
		std::cout << "N1NJ4-TP " << this->_name << " has been repaired by: " << amount << " HP!" << std::endl << "Remaining HP: " << this->_hitpoints << std::endl;
	}
}
