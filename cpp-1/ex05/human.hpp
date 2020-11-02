/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/16 19:16:18 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/16 20:17:37 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "brain.hpp"

class	Human{

public:
	Human();
	std::string		identify(void);
	Brain			getBrain(void);
	
private:
	const	Brain	human_brain;

};

#endif