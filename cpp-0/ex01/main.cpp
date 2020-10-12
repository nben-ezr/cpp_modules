/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/05 21:20:24 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/12 21:20:59 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

int		input_check(std::string str)
{
	if (str == "EXIT")
	{
		return (0);
	}
	else if (str == "SEARCH")
	{
		return (1);
	}
	else if (str == "ADD")
	{
		return (2);
	}
	else
	{
		return (3);
	} 
}

int		main(void)
{
	std::string input;
	phonebook	contacts[8];
	int			i;

	i = 0;
	while (input_check(input) != 0)
	{
		std::cout << "Input a command: " << std::endl;
		std::cin >> input;
		if (input_check(input) == 1)	
			contacts[i].search_contact(i, contacts);
		else if (input_check(input) == 2 && i < 8)
		{
			contacts[i].add_contact();
			i++;
		}
		else if (input_check(input) == 2 && i >= 8)
			std::cout << "!!! There is no space for new contacts !!!" << std::endl;
		else if (input_check(input) == 3)
			std::cout << "!!! Invalid command !!!" << std::endl << std::endl;
	}
	std::cout << "--- Exit program ---" << std::endl;
	return (0);
}
