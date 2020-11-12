/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 17:30:28 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/12 22:02:01 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
	this->_name = name;
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &other) : Victim(other._name)
{
	this->_name = other._name;
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon& Peon::operator = (const Peon source)
{
	this->_name = source._name;
	return (*this);
}


void Peon::getPolymorphed() const
{
	std::cout << _name << " has been turned into a pink pony!" << std::endl;	
}