/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serf.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 21:33:26 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/12 22:49:55 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERF_HPP
# define SERF_HPP
# include "Victim.hpp"

class Serf : public Victim
{
	public:
		Serf(){};
		Serf(std::string name);
		Serf(const Serf& Serf);
		Serf& operator = (const Serf &source);
		~Serf();
		void getPolymorphed() const;
};

#endif