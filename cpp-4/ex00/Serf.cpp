/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serf.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 21:33:29 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/12 22:01:29 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Serf.hpp"

Serf::Serf(std::string name) : Victim(name)
{
	this->_name = name;
	std::cout << "Slavin..." << std::endl;
}

Serf::Serf(Serf const &other) : Victim(other._name)
{
	this->_name = other._name;
	std::cout << "Slavin..." << std::endl;
}


Serf::~Serf()
{
	std::cout << "Woooooooooo" << std::endl;
}

Serf& Serf::operator = (const Serf source)
{
	this->_name = source._name;
	return (*this);
}

void Serf::getPolymorphed() const
{
	std::cout << _name << " has been turned into an ugly toad!" << std::endl;	
}