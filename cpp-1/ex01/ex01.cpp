/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex01.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/13 22:06:07 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/13 22:13:30 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

void memoryLeak()
{
	std::string *panther = new std::string("String panther");

	std::cout << *panther << std::endl;
	delete	panther;
}

int		main(void)
{
	memoryLeak();
	system("leaks a.out");
}