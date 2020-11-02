/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/16 18:49:23 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/19 20:39:25 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	std::string		ayy = "HI THIS IS BRAIN";
	std::string		*ptr  = &ayy;
	std::string&	ref = ayy;

	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
	return (0);
}
