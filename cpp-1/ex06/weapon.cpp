/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/16 20:44:03 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/19 21:25:24 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include  "weapon.hpp"

const std::string&		Weapon::getType(void) const
{
	return (this->_type);
}

void					Weapon::setType(std::string type)
{
	this->_type = type;
}