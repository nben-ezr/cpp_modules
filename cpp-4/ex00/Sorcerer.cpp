/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 17:30:32 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/12 21:30:59 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}
		
std::string Sorcerer::getName() const
{
	return(_name);
}

std::string Sorcerer::getTitle() const
{
	return(_title);
}

void Sorcerer::polymorph(Victim const &Victim) const
{
	Victim.getPolymorphed();
}

std::ostream& operator << (std::ostream &o, Sorcerer const &output)
{
	o << "I am " << output.getName() << ", " << output.getTitle() << ", and I like ponies!" << std::endl;
	return (o);
}