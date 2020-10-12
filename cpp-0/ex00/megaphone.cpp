/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/05 16:47:11 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/05 21:16:02 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	else
	{
		return (c);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else if (argc == 2 || argc == 4)
	{
		while (*argv[1] != '\0')
		{
			std::cout << (char)ft_toupper(*argv[1]);
			argv[1]++;
		}
		if (argc == 4)
		{
			while (*argv[2] != '\0')
			{
				std::cout << (char)ft_toupper(*argv[2]);
				argv[2]++;
			}
			while (*argv[3] != '\0')
			{
				std::cout << (char)ft_toupper(*argv[3]);
				argv[3]++;
			}
			std::cout << std::endl;
		}
	}
	return (0);
}
