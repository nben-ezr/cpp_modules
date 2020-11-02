/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/13 20:26:00 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/13 21:59:38 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream> 

class pony{

public:

	void		ponyOnTheStack(int weight, int height, int size, std::string name);
	void		ponyOnTheHeap(int weight, int height, int size, std::string name);
	std::string	getNamePony(void);

private:
	static int				_amount;
	int						_size;
	int						_initial_weight;
	static int				_added_weight;
	int						_height;
	std::string				_name;
};

#endif