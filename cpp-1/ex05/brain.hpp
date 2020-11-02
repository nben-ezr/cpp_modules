/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/16 19:16:22 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/16 20:19:27 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <sstream>

class	Brain{

public:
	std::string		identify();
	
private:
	std::string		frontal_lobe;
	std::string		temporal_lobe;
	std::string		parietal_lobe;
	std::string		occipital_lobe;
	std::string		cerebellum;
	std::string		spinal_cord;

};

#endif