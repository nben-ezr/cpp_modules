/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/16 19:16:24 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/16 20:28:05 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "brain.hpp"
#include "human.hpp"

std::string		Brain::identify()
{
	std::stringstream	convert;
	std::string			memory;
	Human				temp;
	Brain				addy(temp.getBrain());

	convert << &addy;
	memory = convert.str();
	return (memory);	
}
