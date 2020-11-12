/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 17:30:35 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/12 22:50:07 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
	public:
		Sorcerer();
		Sorcerer(std::string name, std::string title);
		Sorcerer(const Sorcerer& Sorcerer);
		Sorcerer& operator = (const Sorcerer &source);
		~Sorcerer();
		std::string getName() const;
		std::string getTitle() const;
		void polymorph(Victim const &Victim) const;
		
	private:
		std::string _name;	
		std::string _title;
};

std::ostream& operator << (std::ostream &o, Sorcerer const &output);

#endif