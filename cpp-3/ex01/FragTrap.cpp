/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/25 21:40:22 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/12 22:56:24 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
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
	
	std::cout << "Ha-HA! I am ALIIIIIVE!" << std::endl;
}

FragTrap::FragTrap(std::string name)
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
	
	std::cout << "Ha-HA! I am ALIIIIIVE!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &FragTrap_copy)
{
	this->_hitpoints = FragTrap_copy._hitpoints;
	this->_max_hitpoints = FragTrap_copy._max_energy_points;
	this->_energy_points = FragTrap_copy._energy_points;
	this->_max_energy_points = FragTrap_copy._max_energy_points;
	this->_level = FragTrap_copy._level;
	this->_name = FragTrap_copy._name;
	this->_melee_damage = FragTrap_copy._melee_damage;
	this->_ranged_damage = FragTrap_copy._ranged_damage;
	this->_armor_dmg_reduction = FragTrap_copy._armor_dmg_reduction;
}

FragTrap& FragTrap::operator = (const FragTrap &FragTrap_copy)
{
	this->_hitpoints = FragTrap_copy._hitpoints;
	this->_max_hitpoints = FragTrap_copy._max_energy_points;
	this->_energy_points = FragTrap_copy._energy_points;
	this->_max_energy_points = FragTrap_copy._max_energy_points;
	this->_level = FragTrap_copy._level;
	this->_name = FragTrap_copy._name;
	this->_melee_damage = FragTrap_copy._melee_damage;
	this->_ranged_damage = FragTrap_copy._ranged_damage;
	this->_armor_dmg_reduction = FragTrap_copy._armor_dmg_reduction;
	return (*this);
}

void FragTrap::rangedAttack(std::string const & target) const
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with his ranged attack, dealing " << this->_ranged_damage << " damage!" << std::endl;
}


void FragTrap::meleeAttack(std::string const & target) const
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with his melee attack, dealing " << this->_melee_damage << " damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if ((int)amount - this->_armor_dmg_reduction >= this->_hitpoints)
	{
		std::cout << "FR4G-TP " << this->_name << " has been dealt " << this->_hitpoints << " damage! " << std::endl;
		this->_hitpoints = 0;
		std::cout << "Your FR4G-TP " << this->_name << " Has been obliterated!" << std::endl;
	}
	else if (amount >= this->_armor_dmg_reduction)
	{
		this->_hitpoints -= (int)amount - this->_armor_dmg_reduction;
		std::cout << "FR4G-TP " << this->_name << " has been dealt " << amount - this->_armor_dmg_reduction << " damage!" << std::endl << "Remaining HP: " << this->_hitpoints <<  std::endl;
	}
	else
	{
		std::cout << "The damage was too little to penetrate " << this->_name << "'s beautiful armor" << std::endl;
	}
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (amount + this->_hitpoints >= this->_max_hitpoints)
	{
		std::cout << "FR4G-TP " << this->_name << " has been fully repaired!" << std::endl;
		this->_hitpoints = this->_max_hitpoints;
	}
	else
	{
		this->_hitpoints += amount;
		std::cout << "FR4G-TP " << this->_name << " has been repaired by: " << amount << " HP!" << std::endl << "Remaining HP: " << this->_hitpoints << std::endl;
	}
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int		RNG = rand() % 5;
	int		popcorn_amount = rand() % 4;

	if (this->_energy_points < 25)
	{
		std::cout << "FR4G-TP " << this->_name << " is too lazy to do anything :(" << std::endl;
	}
	else if (RNG == 0)
	{
		std::cout << "FR4G-TP " << this->_name << " electrocutes " << target << " with his toaster, dealing " << this->_melee_damage + rand() % 10 << " damage!" << std::endl;
		this->_energy_points -= 25;
	}
	else if (RNG == 1)
	{
		std::cout << "FR4G-TP " << this->_name << " Throws " << popcorn_amount << " explosive popcorn at " << target << ", dealing " << (this->_ranged_damage - 5) * popcorn_amount << " damage!" << std::endl;
		this->_energy_points -= 25;
	}
	else if (RNG == 2)
	{
		std::cout << "FR4G-TP " << this->_name << " activates Clap-in-the-Box, dealing " << this->_ranged_damage * 3 << " damage to " << target << "!" << std::endl;
		this->_energy_points -= 25;
	}
	else if (RNG == 3)
	{
		std::cout << "FR4G-TP " << this->_name << " mashes random buttons, deploying rockets dealing " << this->_ranged_damage + 15 << " damage to " << target << "!" << std::endl;
		this->_energy_points -= 25;
	}
	else if (RNG == 4)
	{
		std::cout << "FR4G-TP " << this->_name << " laughs maniacally hurting " << target << "'s ego. It is extremely effective dealing 200 damage!" << std::endl;
		this->_energy_points -= 25;
	}
}