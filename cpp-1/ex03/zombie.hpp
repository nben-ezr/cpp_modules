/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/13 22:14:47 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/16 18:12:02 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class zombie{

public:
	void	announce(void) const;

	std::string name;
	std::string type;
};

#endif