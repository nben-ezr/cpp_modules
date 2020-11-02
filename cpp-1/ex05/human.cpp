/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/16 19:16:20 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/16 20:30:22 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "human.hpp"

Human::Human()
{

}

Brain		Human::getBrain(void)
{
	return (this->human_brain);
}

std::string	Human::identify(void)
{
	return (this->getBrain().identify());
}
