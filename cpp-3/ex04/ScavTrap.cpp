/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 21:14:39 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/12 22:51:50 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
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
	
	std::cout << "Hey everybody! Check out my package!" << std::endl;
}

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

ScavTrap::ScavTrap(const ScavTrap &ScavTrap_copy)
{
	this->_hitpoints = ScavTrap_copy._hitpoints;
	this->_max_hitpoints = ScavTrap_copy._max_energy_points;
	this->_energy_points = ScavTrap_copy._energy_points;
	this->_max_energy_points = ScavTrap_copy._max_energy_points;
	this->_level = ScavTrap_copy._level;
	this->_name = ScavTrap_copy._name;
	this->_melee_damage = ScavTrap_copy._melee_damage;
	this->_ranged_damage = ScavTrap_copy._ranged_damage;
	this->_armor_dmg_reduction = ScavTrap_copy._armor_dmg_reduction;
}

ScavTrap& ScavTrap::operator = (const ScavTrap &ScavTrap_copy)
{
	this->_hitpoints = ScavTrap_copy._hitpoints;
	this->_max_hitpoints = ScavTrap_copy._max_energy_points;
	this->_energy_points = ScavTrap_copy._energy_points;
	this->_max_energy_points = ScavTrap_copy._max_energy_points;
	this->_level = ScavTrap_copy._level;
	this->_name = ScavTrap_copy._name;
	this->_melee_damage = ScavTrap_copy._melee_damage;
	this->_ranged_damage = ScavTrap_copy._ranged_damage;
	this->_armor_dmg_reduction = ScavTrap_copy._armor_dmg_reduction;
	return (*this);
}

void ScavTrap::rangedAttack(std::string const & target) const
{
	std::cout << "SC4V-TP " << this->_name << " launches a plasma beam at " << target << " , dealing " << this->_ranged_damage << " damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target) const
{
	std::cout << "SC4V-TP " << this->_name << " slashes at " << target << " , dealing " << this->_melee_damage << " damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if ((int)amount - this->_armor_dmg_reduction >= this->_hitpoints)
	{
		std::cout << "SC4V-TP " << this->_name << " has been dealt " << this->_hitpoints << " damage! " << std::endl;
		this->_hitpoints = 0;
		std::cout << "Your SC4V-TP " << this->_name << " Has been obliterated!" << std::endl;
	}
	else if (amount >= this->_armor_dmg_reduction)
	{
		this->_hitpoints -= (int)amount - this->_armor_dmg_reduction;
		std::cout << "SC4V-TP " << this->_name << " has been dealt " << amount - this->_armor_dmg_reduction << " damage!" << std::endl << "Remaining HP: " << this->_hitpoints <<  std::endl;
	}
	else
	{
		std::cout << "The damage was too little to penetrate " << this->_name << "'s beautiful armor" << std::endl;
	}
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (amount + this->_hitpoints >= this->_max_hitpoints)
	{
		std::cout << "SC4V-TP " << this->_name << " has been fully repaired!" << std::endl;
		this->_hitpoints = this->_max_hitpoints;
	}
	else
	{
		this->_hitpoints += amount;
		std::cout << "SC4V-TP " << this->_name << " has been repaired by: " << amount << " HP!" << std::endl << "Remaining HP: " << this->_hitpoints << std::endl;
	}
}

void ScavTrap::challengeNewcomer(int challengeAmount)
{
	for(challengeAmount > 0; challengeAmount--;)
	{
		int challenge = rand() % 3;
		if (challenge == 0)
		{
			std::cout << "get yo ass outta bed" << std::endl;			
		}
		else if (challenge == 1)
		{
			this->trivia();	
		}
		else if (challenge == 2)
		{
			this->guess_number();	
		}
	}	
}

void ScavTrap::trivia(void)
{
	std::string answer;
	
	std::cout << this->_name << ": What is the name of the first weekly project of the Codam piscine?" << std::endl;
	std::cin >> answer;
	if (answer == "Sastantua" || answer == "sastantua")
	{
		std::cout << "Correct! Good memory you have there :)" << std::endl;
	}
	else
	{
		std::cout << "Incorrect!" << std::endl;
	}
	
}

void ScavTrap::guess_number(void)
{
	int answer = rand() % 11;
	int user_answer;

	std::cout << this->_name << ": guess a number between 0 and 10. You get 3 chances." << std::endl;
	for (int chances = 3; chances > 0; chances--)
	{
		std::cin >> user_answer;
		if (user_answer == answer)
		{
			std::cout << "Correct! The answer was indeed: " << answer << std::endl;
			return ;
		}
		else
		{
			std::cout << "Incorrect answer. Remaining chances: " << chances - 1 << std::endl;	
		}
	}
	std::cout << "Challenge failed. The correct answer was: " << answer << std::endl;
}
