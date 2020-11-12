/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 17:30:30 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/12 19:02:05 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP
# include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon(){};
		Peon(std::string name);
		Peon(const Peon& Peon);
		Peon& operator = (const Peon source);
		~Peon();
		void getPolymorphed() const;
};

#endif