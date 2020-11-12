/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 17:30:40 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/12 19:00:54 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>

class Victim
{
	public:
		Victim(){};
		Victim(std::string name);
		Victim(const Victim& Victim);
		Victim& operator = (const Victim source);
		virtual ~Victim();
		std::string getName() const;
		virtual void getPolymorphed() const;

	protected:
		std::string _name;	
};

std::ostream& operator << (std::ostream &o, Victim const &output);

#endif