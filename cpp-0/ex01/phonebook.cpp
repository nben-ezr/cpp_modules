/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/05 21:41:09 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/12 21:23:15 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "phonebook.hpp"

void	phonebook::add_contact(void)
{
	std::cout << "Input first name" << std::endl;
	std::cin >> phonebook::_first_name;
	std::cout << "Input last name" << std::endl;
	std::cin >> phonebook::_last_name;
	std::cout << "Input nickname" << std::endl;
	std::cin >> phonebook::_nickname;
	std::cout << "Input login" << std::endl;
	std::cin >> phonebook::_login;
	std::cout << "Input postal address" << std::endl;
	std::cin >> phonebook::_postal_address;
	std::cout << "Input email address" << std::endl;
	std::cin >> phonebook::_email_address;
	std::cout << "Input phone number" << std::endl;
	std::cin >> phonebook::_phone_number;
	std::cout << "Input birthday date" << std::endl;
	std::cin >> phonebook::_birthday_date;
	std::cout << "Input favorite meal" << std::endl;
	std::cin >> phonebook::_favorite_meal;
	std::cout << "Input underwear color" << std::endl;
	std::cin >> phonebook::_underwear_color;
	std::cout << "Input darkest secret" << std::endl;
	std::cin >> phonebook::_darkest_secret;
	return ;
}

std::string	phonebook::format_str(std::string str)
{
	if (str.length() > 9)
	{
		str.resize(9);
	}
	if (str.length() == 9)
	{
		str += '.';
	}
	return(str);
}

void		phonebook::display_info(int index, phonebook contacts[8])
{
	std::cout 
	<< "Index: " << "[" << index << "]" << std::endl
	<< "First name: " << contacts[index]._first_name << std::endl
	<< "Last name: " << contacts[index]._last_name << std::endl
	<< "Nickname: " << contacts[index]._nickname << std::endl
	<< "Login: " << contacts[index]._login << std::endl
	<< "Postal address: " << contacts[index]._postal_address << std::endl
	<< "Email address: " << contacts[index]._email_address << std::endl
	<< "Phone number: " << contacts[index]._phone_number << std::endl
	<< "Birthday date: " << contacts[index]._birthday_date << std::endl
	<< "Favorite meal: " << contacts[index]._favorite_meal << std::endl
	<< "Underwear color: " << contacts[index]._underwear_color << std::endl
	<< "Darkest secret: " << contacts[index]._darkest_secret << std::endl;
	return ;
}

void		phonebook::search_contact(int NbContacts, phonebook contacts[8])
{
	int counter;
	int index;
	
	counter = 0;
	while (counter < NbContacts)
	{
		std::cout
		<< "Index: " << std::right << std::setw(10) << counter << std::endl
		<< "First Name: " << std::right << std::setw(10) <<  format_str(contacts[counter]._first_name) <<	std::endl
		<< "Last Name: " << std::right << std::setw(10) <<  format_str(contacts[counter]._last_name) <<	std::endl
		<< "Nickname: " << std::right << std::setw(10) <<  format_str(contacts[counter]._nickname) <<	std::endl << std::endl;
		counter++;
	}
	std::cout << "Input index of contact: " << std::endl;
	std::cin >> index;
	if (index >= 0 && index < NbContacts)
	{
		display_info(index, contacts);
	}
	else
	{
		std::cout << "!!! Invalid index !!!" << std::endl;
	}
	return ;
}
