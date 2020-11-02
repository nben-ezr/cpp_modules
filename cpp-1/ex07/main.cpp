/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/19 21:42:01 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/21 22:04:16 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int		main(int argc, char **argv)
{
	std::string file_input;
	
	if (argc == 4)
	{
		std::string	old_string = argv[2];
		std::string new_string = argv[3];
		if (argv[2] && argv[3] != NULL)
		{
			std::string		newfile_name(argv[1]);
			std::transform(newfile_name.begin(), newfile_name.end(), newfile_name.begin(), ::toupper);
			newfile_name.append(".replace");
			
			std::ifstream	ifs(argv[1]);
			if (ifs.is_open())
			{
				while (ifs.good())
				{
					std::getline(ifs, file_input, '\0');
					while (file_input.find(old_string) != std::string::npos)
					{
						file_input.replace(file_input.find(old_string),old_string.length(), new_string);
					}

				}
				std::ofstream newfile(newfile_name);
				newfile << file_input;
				ifs.close();
			}
		}
	}
	return (0);
}
