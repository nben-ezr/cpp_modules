/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 17:30:38 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/12 21:59:56 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const &other) : _name(other._name)
{
	this->_name = other._name;
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim& Victim::operator = (const Victim source)
{
	this->_name = source._name;
	return (*this);
}


Victim::~Victim()
{
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

void Victim::getPolymorphed() const
{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;	
}

std::string Victim::getName() const
{
	return(_name);
}

std::ostream& operator << (std::ostream &o, Victim const &output)
{
	o << "I'm " << output.getName() << " and I like otters!" << std::endl;
	return (o);
}