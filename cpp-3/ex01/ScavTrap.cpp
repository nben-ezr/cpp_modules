/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 21:14:39 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/09 03:23:29 by nben-ezr      ########   odam.nl         */
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
