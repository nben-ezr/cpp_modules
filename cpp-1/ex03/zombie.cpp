/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/13 22:14:50 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/16 17:27:25 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

void	zombie::announce(void) const
{
	std::cout << "<" << this->name << " (" << this->type << ")" << ">" << "   I am the superior president! Now please, end my damn suffering" << std::endl;
	return ;
}
