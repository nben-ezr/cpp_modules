/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/16 19:13:55 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/16 20:00:52 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "human.hpp"
#include "brain.hpp"

int main()
{
	Human bob;

	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
}
